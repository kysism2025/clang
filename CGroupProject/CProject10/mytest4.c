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
// 가장 작은 구성요소의 크기가 1byte이므로 1byte의 배수로 크기가 정해집니다.


struct Packet05 {
    char	flags;	// 1byte +
    short	flags2;	// 2byte = 3 byte
};
// Packet04와 구성 요소의 총 길이는 같지만 가장 작은 요소가 2byte이므로 구조체의 크기가 달라집니다.

struct Packet06 {
    char		flags;	// 1byte +
    long long	ip1;	// 8byte +
    long long	ip2;	// 8byte = 17 byte
};


void main() {

    // 구조체 안에 구조체가 있을 경우에는 모든 내부구조체의 원소중 가장 큰 값을 기준으로 크기가 할당됩니다.
    struct Packet02 p02;
    struct Packet03 p03;
    struct Packet04 p04;
    struct Packet05 p05;
    struct Packet06 p06;

    printf("크기2:%d", sizeof(p02));		// 12byte
    printf("크기3:%d", sizeof(p03));		// 12byte
    printf("크기4:%d", sizeof(p04));		// 3byte
    printf("크기5:%d", sizeof(p05));		// 4byte
    printf("크기6:%d", sizeof(p06));		// 24byte
}