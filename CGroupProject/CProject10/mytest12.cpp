#include <iostream>
using namespace std;

int& CalSum(int s, int e, int& sum);
int main()
{
    int sum = 0;
    int& r1 = CalSum(1, 100, sum); //���� ������ ����ο��� �ʱ�ȭ�� �ʼ�
    cout << "r1:" << r1 << endl;
    int& r2 = CalSum(1, 10, sum);
    cout << "r2:" << r2 << endl;

    cout << "r1:" << r1 << endl << "r2:" << r2 << endl;

    return 0;
}

int& CalSum(int s, int e, int& sum)
{
    
    for (; s <= e; s++)
    {
        sum += s;
    }
    return sum;
}