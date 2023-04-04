//참조와 값만 차이가 있는 함수 중복 정의
#include <iostream>
using namespace std;

int Add(int& r1, int& r2, int k);
int Add(int i, int j);
int main()
{
    int re = Add(2, 3);
    cout << "re:" << re << endl;
    int a = 2, b = 3;
    cout << "re>a>:" << &a << endl;
    cout << "re>b>:" << &b << endl;
    re = Add(a, b, 1);
    cout << "re:" << re << endl;
    return 0;
}

// r1(별칭)는 a와 동일한 메모리 공간을 참조한다.
// 포인터는 가리킬 대상을 변경할수 있지만, 레퍼런스는 불가능하다.
int Add(int& r1, int& r2, int k)
{
    return r1 + r2;
}

int Add(int i, int j)
{
    return i + j;
}