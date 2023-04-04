#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
void error_handling(char* message);
int main(int argc, char* argv[])
{
	int clnt_sock;
	struct sockaddr_in serv_addr;
	char message[1024] = { 0x00, };
	//TCP�����������̰� ipv4 �������� ���� ������ ����
	clnt_sock = socket(PF_INET, SOCK_STREAM, 0);
	if (clnt_sock == -1)
		error_handling("socket error");
	//���ڷ� ���� ���� �ּ� ������ ����
	memset(&serv_addr, 0, sizeof(serv_addr));
	//�����ּ�ü��� IPv4�̴�
	serv_addr.sin_family = AF_INET;
	//�����ּ� IP�������ֱ�(���ڷ� ������ �Ѱ��ֱ�)
	serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
	//�����ּ� ��Ʈ��ȣ ���ڷ� ������ �������ֱ�
	serv_addr.sin_port = htons(atoi(argv[2]));
	//Ŭ���̾�Ʈ ���Ϻκп� ������ ����!
	if (connect(clnt_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
		error_handling("connect error");
	//������ ���������� �Ǿ����� ������ �ޱ�
	if (read(clnt_sock, message, sizeof(message) - 1) == -1)
		error_handling("read error");
	printf("Message from server :%s\n", message);
	//��� �� ���� Ŭ�ο���
	close(clnt_sock);
	return 0;
}
void error_handling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}