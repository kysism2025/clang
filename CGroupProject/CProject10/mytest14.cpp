//C언어에서 캡슐화
#include <stdio.h>

#define MAX_NAME_LEN 20
typedef struct Unit Unit;

struct Unit//구조체를 이용하여 캡슐화
{
    //멤버 필드(멤버 변수)만 캡슐화 가능
    //접근 지정자를 제공하고 있지 않음
    int num;
    char name[MAX_NAME_LEN];
    int hp;
};


//형식과 별개로 함수를 작성
void Train(Unit* unit, int hour)
{
    printf("%d번 유닛(%s) 훈련하다.\n", unit->num, unit->name);
    unit->hp += hour; //접근 지정자가 없어 어디서나 멤버에 접근이 가능
}

int main()
{
    Unit unit = { 3,"홍길동",100 };
    Train(&unit, 5);
    printf("%d번, 유닛 이름:%s, 체력:%d\n", unit.num, unit.name, unit.hp);
    unit.hp += 1000;//접근 지정자가 없어 어디서나 멤버에 접근이 가능
    printf("%d번, 유닛 이름:%s, 체력:%d\n", unit.num, unit.name, unit.hp);
    return 0;
}