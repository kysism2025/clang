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

		printf("          [메뉴]          \n");
		printf("==========================\n");
		printf("1. 친구추가                \n");
		printf("2. 친구 목록 보기          \n");
		printf("3. 종료                   \n");
		printf("==========================\n");
		printf("번호 선택\n");
		scanf_s("%d", &num);
		printf("선택한번호 num:%d\n", num);

		if (num == 1) {
			printf("친구를 추가합니다.\n");
			addFriend(friends, count);
			count++;
		}
		else if (num == 2) {
			printf("추가한 친구정보를 표시합니다.\n");
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

		printf("새로운 친구 정보를 입력하세요.\n");
		printf("이름:");
		//scanf_s("%s", temp, 32);
		scanf_s("%s", pinfo->name, 32);
		printf("\n나이:");
		scanf_s("%d", &pinfo->age); // 표시가능 : (*pinfo).age ==> pinfo->age ==> pinfo[i].age(// pinfo = pinfo + idx생략시)가능
		printf("\n키:");
		scanf_s("%f", &pinfo->height);
		printf("\n몸무게:");
		scanf_s("%f", &pinfo->weight);
		printf("입력을 완료했습니다.\n");
		/*
		int len = strlen(temp);
		pinfo->name = (char*)malloc(len);
		memcpy(pinfo->name, temp, len + 1);
		*/
	}

}

void displayFriend(PERSON* pinfo, int idx) {
	printf("등록된 친구목록.\n");
	printf("==========================\n");
	
	for (int i = 0; i < idx; i++) {
		printf("%s   %d   %.1lf   %.1lf\n", pinfo->name, pinfo->age, pinfo->height, pinfo->weight);
		pinfo++;
	}

	printf("==========================\n");
}