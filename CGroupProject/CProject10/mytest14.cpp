//C���� ĸ��ȭ
#include <stdio.h>

#define MAX_NAME_LEN 20
typedef struct Unit Unit;

struct Unit//����ü�� �̿��Ͽ� ĸ��ȭ
{
    //��� �ʵ�(��� ����)�� ĸ��ȭ ����
    //���� �����ڸ� �����ϰ� ���� ����
    int num;
    char name[MAX_NAME_LEN];
    int hp;
};


//���İ� ������ �Լ��� �ۼ�
void Train(Unit* unit, int hour)
{
    printf("%d�� ����(%s) �Ʒ��ϴ�.\n", unit->num, unit->name);
    unit->hp += hour; //���� �����ڰ� ���� ��𼭳� ����� ������ ����
}

int main()
{
    Unit unit = { 3,"ȫ�浿",100 };
    Train(&unit, 5);
    printf("%d��, ���� �̸�:%s, ü��:%d\n", unit.num, unit.name, unit.hp);
    unit.hp += 1000;//���� �����ڰ� ���� ��𼭳� ����� ������ ����
    printf("%d��, ���� �̸�:%s, ü��:%d\n", unit.num, unit.name, unit.hp);
    return 0;
}