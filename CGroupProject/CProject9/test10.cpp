#include <stdio.h>
#include <iostream>
using namespace std; //std 네임 스페이스를 사용

namespace AA {

    void TestCout()
    {
        int num = 23;
        const char* name = "홍길동";
        cout << "이름:" << name << " 번호:" << num << endl;
    }

    void TestCin()
    {
        int num;
        char name[256];

        cout << "번호:";
        cin >> num;
        cout << "이름:";
        cin >> name;

        cout << "입력한 번호는 " << num << " 이름은 " << name << "입니다." << endl;
    }
}

void main() {

    AA::TestCout();
    AA::TestCin();
}

