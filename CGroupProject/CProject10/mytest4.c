#include <stdio.h>

struct Packet02 {
    char	flags;	// 1byte +
    short	count;	// 2byte +
    int		msg;	// 4byte +
    int		msgID;	// 4byte = 11 byte
};


struct Packet03 {
    char	flags;	// 1byte +
    int		msg;	// 4byte +
    int		msgID;	// 4byte = 9 byte
};



struct Packet04 {
    char	flags;	// 1byte +
    char	flags2;	// 1byte +
    char	flags3;	// 1byte = 3 byte
};
// ���� ���� ��������� ũ�Ⱑ 1byte�̹Ƿ� 1byte�� ����� ũ�Ⱑ �������ϴ�.


struct Packet05 {
    char	flags;	// 1byte +
    short	flags2;	// 2byte = 3 byte
};
// Packet04�� ���� ����� �� ���̴� ������ ���� ���� ��Ұ� 2byte�̹Ƿ� ����ü�� ũ�Ⱑ �޶����ϴ�.

struct Packet06 {
    char		flags;	// 1byte +
    long long	ip1;	// 8byte +
    long long	ip2;	// 8byte = 17 byte
};


void main() {

    // ����ü �ȿ� ����ü�� ���� ��쿡�� ��� ���α���ü�� ������ ���� ū ���� �������� ũ�Ⱑ �Ҵ�˴ϴ�.
    struct Packet02 p02;
    struct Packet03 p03;
    struct Packet04 p04;
    struct Packet05 p05;
    struct Packet06 p06;

    printf("ũ��2:%d", sizeof(p02));		// 12byte
    printf("ũ��3:%d", sizeof(p03));		// 12byte
    printf("ũ��4:%d", sizeof(p04));		// 3byte
    printf("ũ��5:%d", sizeof(p05));		// 4byte
    printf("ũ��6:%d", sizeof(p06));		// 24byte
}