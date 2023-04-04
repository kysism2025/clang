// ������ ����ϱ� ���ؼ� ���̺귯�� �����ؾ� �Ѵ�.
#pragma comment(lib, "ws2_32")
// inet_ntoa�� deprecated�� �Ǿ��µ�.. ����Ϸ��� �Ʒ� ������ �ؾ� �Ѵ�.
#pragma warning(disable:4996)
#include <stdio.h>
#include <iostream>
#include <vector>
#include <thread>
// ������ ����ϱ� ���� ���̺귯��
#include <WinSock2.h>
// ���� ���� ������
#define BUFFERSIZE 1024
using namespace std;
// ���� ���� ��, �ܼ� ��� �� echo ������ ����� �Լ�
char* print(vector<char>* str)
{
    // ����Ʈ ��ġ
    int p = 0;
    // ���� ����. +1�� \0�� �ֱ� ���� ũ��
    char out[BUFFERSIZE + 1];
    // return�� �ϱ� ���ؼ��� ���� �����͸� ���� �ؾ� �Ѵ�.
    char* ret = new char[str->size() + 10];
    // �޸� ���� "echo - "�� ������.
    memcpy(ret, "echo - ", 7);
    // �ܼ� ���
    cout << "From Client message : ";
    // buffer�������� �Ѿ�� �������� ��� �ݺ��� ���ؼ� �޴´�.
    for (int n = 0; n < (str->size() / BUFFERSIZE) + 1; n++)
    {
        // ���� ������ ����
        int size = str->size();
        // ���� �����Ͱ� ���� ����� �Ѿ��� ���.
        if (size > BUFFERSIZE) {
            if (str->size() < (n + 1) * BUFFERSIZE)
            {
                size = str->size() % BUFFERSIZE;
            }
            else
            {
                size = BUFFERSIZE;
            }
        }
        // echo �޽����� �ܼ� �޽����� �ۼ��Ѵ�.
        for (int i = 0; i < size; i++, p++)
        {
            out[i] = *(str->begin() + p);
            if (out[i] == '\0')
            {
                out[i] = ' ';
            }
            *(ret + p + 7) = out[i];
        }
        out[size] = '\0';
        // �ܼ� �޽��� �ܼ� ���.
        cout << out;
    }
    cout << endl;
    // ���� �޽����� ���� ���� + ">"�� �ִ´�.
    memcpy(ret + p + 7, "\n>\0", 3);
    return ret;
}
// ���ӵǴ� client�� ������
void client(SOCKET clientSock, SOCKADDR_IN clientAddr, vector<thread*>* clientlist)
{
    // ���� ������ �ֿܼ� ����Ѵ�.
    cout << "Client connected IP address = " << inet_ntoa(clientAddr.sin_addr) << ":" << ntohs(clientAddr.sin_port) << endl;
    // client�� �޽����� ������.
    const char* message = "Welcome server!\r\n>\0";
    send(clientSock, message, strlen(message) + 1, 0);
    // telent�� �ѱ��ھ� �����Ͱ� ���� ������ ���ڸ� ���� buffer�� �ʿ��ϴ�.
    vector<char> buffer;
    // ���� ������
    char x;
    while (1)
    {
        // �����͸� �޴´�. ������ �߻��ϸ� �����.
        if (recv(clientSock, &x, sizeof(char), 0) == SOCKET_ERROR)
        {
            // ���� �ܼ� ���
            cout << "error" << endl;
            break;
        }
        // ���� buffer�� ���ڸ��� ������ ���
        if (buffer.size() > 0 && *(buffer.end() - 1) == '\r' && x == '\n')
        {
            // �޽����� exit�� ���� ���Ŵ�⸦ �����.
            if (*buffer.begin() == 'e' && *(buffer.begin() + 1) == 'x' && *(buffer.begin() + 2) == 'i' && *(buffer.begin() + 3) == 't') {
                break;
            }
            // �ֿܼ� ����ϰ� ���� �޽����� �޴´�.
            const char* echo = print(&buffer);
            // client�� ���� �޽��� ������.
            send(clientSock, echo, buffer.size() + 10, 0);
            // ���� �޽����� ��(new�� ����� ����)�� �����߱� ������ �޸� �����Ѵ�.
            delete echo;
            // ���۸� ����.
            buffer.clear();
            // ���� �޽��� ���� ���
            continue;
        }
        // ���ۿ� ���ڸ� �ϳ� �ִ´�.
        buffer.push_back(x);
    }
    // ���� ��Ⱑ ������ client�� ���� ����� ���´�.
    closesocket(clientSock);
    // ���� ������ �ֿܼ� ����Ѵ�.
    cout << "Client disconnected IP address = " << inet_ntoa(clientAddr.sin_addr) << ":" << ntohs(clientAddr.sin_port) << endl;
    // threadlist���� ���� �����带 �����Ѵ�.
    for (auto ptr = clientlist->begin(); ptr < clientlist->end(); ptr++)
    {
        // thread ���̵� ���� ���� ã�Ƽ�
        if ((*ptr)->get_id() == this_thread::get_id())
        {
            // ����Ʈ���� ����.
            clientlist->erase(ptr);
            break;
        }
    }
    // thread �޸� ������ thread�� ���� ������ �ڵ����� ó���ȴ�.
}
// ���� �Լ�
int main()
{
    // Ŭ���̾�Ʈ ���� ���� client list
    vector<thread*> clientlist;
    // ���� ���� ������ ����
    WSADATA wsaData;
    // ���� ����.
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        return 1;
    }
    // Internet�� Stream ������� ���� ���� 
    SOCKET serverSock = socket(PF_INET, SOCK_STREAM, 0);
    // ���� �ּ� ����
    SOCKADDR_IN addr;
    // ����ü �ʱ�ȭ
    memset(&addr, 0, sizeof(addr));
    // ������ Internet Ÿ��
    addr.sin_family = AF_INET;
    // �����̱� ������ local �����Ѵ�.
    // Any�� ���� ȣ��Ʈ�� 127.0.0.1�� ��Ƶ� �ǰ� localhost�� ��Ƶ� �ǰ� ���� �� ����ϰ� �� �� �ֵ�. �װ��� INADDR_ANY�̴�.
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    // ���� ��Ʈ ����...���� 9090���� ������.
    addr.sin_port = htons(9090);
    // ������ ���� ������ ���Ͽ� ���ε��Ѵ�.
    if (bind(serverSock, (SOCKADDR*)&addr, sizeof(SOCKADDR_IN)) == SOCKET_ERROR)
    {
        // ���� �ܼ� ���
        cout << "error" << endl;
        return 1;
    }
    // ������ ��� ���·� ��ٸ���.
    if (listen(serverSock, SOMAXCONN) == SOCKET_ERROR)
    {
        // ���� �ܼ� ���
        cout << "error" << endl;
        return 1;
    }
    // ������ �����Ѵ�.
    cout << "Server Start" << endl;
    // ���� ������ ���� while�� ������ ����Ѵ�.
    while (1)
    {
        // ���� ���� ����ü ������
        int len = sizeof(SOCKADDR_IN);
        // ���� ���� ����ü
        SOCKADDR_IN clientAddr;
        // client�� ������ �ϸ� SOCKET�� �޴´�.
        SOCKET clientSock = accept(serverSock, (SOCKADDR*)&clientAddr, &len);
        // �����带 �����ϰ� ������ ����Ʈ�� �ִ´�.
        clientlist.push_back(new thread(client, clientSock, clientAddr, &clientlist));
    }
    // ���ᰡ �Ǹ� ������ ����Ʈ�� ���� �ִ� �����带 ������ ������ ��ٸ���.
    for (auto ptr = clientlist.begin(); ptr < clientlist.end(); ptr++)
    {
        (*ptr)->join();
    }
    // ���� ���� ����
    closesocket(serverSock);
    // ���� ����
    WSACleanup();
    return 0;
}