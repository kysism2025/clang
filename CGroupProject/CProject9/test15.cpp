//������ ���� ���̰� �ִ� �Լ� �ߺ� ����
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

// r1(��Ī)�� a�� ������ �޸� ������ �����Ѵ�.
// �����ʹ� ����ų ����� �����Ҽ� ������, ���۷����� �Ұ����ϴ�.
int Add(int& r1, int& r2, int k)
{
    return r1 + r2;
}

int Add(int i, int j)
{
    return i + j;
}