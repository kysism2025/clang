//�Լ� �ߺ� ����
//Program.cpp

#include <iostream>
using namespace std;

int GetMax(int a, int b)
{
    cout << "int GetMax(int a,int b)" << endl; //�׽�Ʈ�� ���� ���
    if (a > b)
    {
        return a;
    }
    return b;
}

char GetMax(char a, char b)
{
    cout << "char GetMax(char a,char b)" << endl; //�׽�Ʈ�� ���� ���
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    cout << GetMax(2, 3) << endl;   //int GetMax(int a, int b);�� ȣ��
    cout << GetMax('a', 'b') << endl; //char GetMax(char a,char b);�� ȣ��
    return 0;
}