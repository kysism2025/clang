#include "Student.h"
#include <iostream>
using namespace std;

//static ��� �ʵ�� ��� �ʵ� ������ �ؾ� ��, ���𹮿��� static Ű���� ��� �� ��
const int Student::max_hp = 200; //���� ���ȭ ��� �ʵ� �ʱⰪ ����
Student::Student(int _num, string _name) :num(_num)//�� ���� ���ȭ ��� �ʵ� �ʱ�ȭ
{
    name = _name;
    hp = 0;

}

void Student::View()const//���ȭ ��� �޼���
{
    cout << "��ȣ:" << num << " �̸�:" << name << " HP:" << hp << endl;
}