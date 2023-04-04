#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define MAX_COUNT 2

typedef struct FriendInfo {
	//char* name;
	char name[31];
	unsigned short int age;
	float height;
	float weight;
} PERSON;

void addFriend(PERSON* friendInfo, int idx);
void displayFriend(PERSON* friendInfo, int idx);

void main() {

	int num;
	int count = 0;
	PERSON friends[MAX_COUNT];

	while (1) {

		printf("          [�޴�]          \n");
		printf("==========================\n");
		printf("1. ģ���߰�                \n");
		printf("2. ģ�� ��� ����          \n");
		printf("3. ����                   \n");
		printf("==========================\n");
		printf("��ȣ ����\n");
		scanf_s("%d", &num);
		printf("�����ѹ�ȣ num:%d\n", num);

		if (num == 1) {
			printf("ģ���� �߰��մϴ�.\n");
			addFriend(friends, count);
			count++;
		}
		else if (num == 2) {
			printf("�߰��� ģ�������� ǥ���մϴ�.\n");
			displayFriend(friends, count);

		}
		else if (num == 3) {
			exit(0);
		}

	}
}

void addFriend(PERSON* pinfo, int idx) {

	if (idx < 2) {

		//char temp[32];
		pinfo = pinfo + idx;

		printf("���ο� ģ�� ������ �Է��ϼ���.\n");
		printf("�̸�:");
		//scanf_s("%s", temp, 32);
		scanf_s("%s", pinfo->name, 32);
		printf("\n����:");
		scanf_s("%d", &pinfo->age); // ǥ�ð��� : (*pinfo).age ==> pinfo->age ==> pinfo[i].age(// pinfo = pinfo + idx������)����
		printf("\nŰ:");
		scanf_s("%f", &pinfo->height);
		printf("\n������:");
		scanf_s("%f", &pinfo->weight);
		printf("�Է��� �Ϸ��߽��ϴ�.\n");
		/*
		int len = strlen(temp);
		pinfo->name = (char*)malloc(len);
		memcpy(pinfo->name, temp, len + 1);
		*/
	}

}

void displayFriend(PERSON* pinfo, int idx) {
	printf("��ϵ� ģ�����.\n");
	printf("==========================\n");
	
	for (int i = 0; i < idx; i++) {
		printf("%s   %d   %.1lf   %.1lf\n", pinfo->name, pinfo->age, pinfo->height, pinfo->weight);
		pinfo++;
	}

	printf("==========================\n");
}