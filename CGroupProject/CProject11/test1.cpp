#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <io.h>

void error_handling(const char* message);
int main(int argc, char* argv[])
{
	int serv_sock;
	int clnt_sock;
	//sockaddr_in�� ���� �ּ��� Ʋ�� �������ִ� ����ü�� AF_INET�� ��� ���
	struct sockaddr_in serv_addr;
	struct sockaddr_in clnt_addr; //accept�Լ����� ����.
	socklen_t clnt_addr_size;
	//TCP�����������̰� ipv4 �������� ���� ������ ����
	serv_sock = socket(PF_INET, SOCK_STREAM, 0);
	if (serv_sock == -1) error_handling("socket error");
		
	//�ּҸ� �ʱ�ȭ�� �� IP�ּҿ� ��Ʈ ����
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET; //Ÿ��: ipv4
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY); //ip�ּ�
	serv_addr.sin_port = htons(atoi(argv[1])); //port
	//���ϰ� ���� �ּҸ� ���ε�
	if (bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
		error_handling("bind error");
	//���� ��⿭ 5�� ����
	if (listen(serv_sock, 5) == -1)
		error_handling("listen error");
	//Ŭ���̾�Ʈ�κ��� ��û�� ���� ���� ����
	clnt_addr_size = sizeof(clnt_addr);
	clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size);
	if (clnt_sock == -1)
		error_handling("accept error");
	/*-----������ ����-----*/
	char msg[] = "Hello this is server!\n";
	write(clnt_sock, msg, sizeof(msg));
	//���ϵ� �ݱ�
	close(clnt_sock);
	close(serv_sock);
	return 0;
}
void error_handling(const char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}
