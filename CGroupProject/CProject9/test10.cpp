#include <stdio.h>
#include <iostream>
using namespace std; //std ���� �����̽��� ���

namespace AA {

    void TestCout()
    {
        int num = 23;
        const char* name = "ȫ�浿";
        cout << "�̸�:" << name << " ��ȣ:" << num << endl;
    }

    void TestCin()
    {
        int num;
        char name[256];

        cout << "��ȣ:";
        cin >> num;
        cout << "�̸�:";
        cin >> name;

        cout << "�Է��� ��ȣ�� " << num << " �̸��� " << name << "�Դϴ�." << endl;
    }
}

void main() {

    AA::TestCout();
    AA::TestCin();
}

