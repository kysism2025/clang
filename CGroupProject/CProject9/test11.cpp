#include <iostream>
using namespace std;
typedef enum Gender
{
    FEMALE = 1,
    MALE
} GENDER;

struct StuInfo
{
    int num;
    char name[20];
};

void main()
{
    GENDER g = MALE; //�±� ���� Gender�� ���� ������ ���
    StuInfo si = { 2,"ȫ�浿" }; //�±� ���� StuInfo�� ���� ������ ���

    cout << "����(1-����, 2-����):" << g << endl;
    cout << "�л� ��ȣ:" << si.num << " �̸�:" << si.name << endl;
}