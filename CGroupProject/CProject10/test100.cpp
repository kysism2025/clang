//���� ��ȯ
#include <iostream>
using namespace std;

int& CalSum(int s, int e);
int main()
{
    int& r1 = CalSum(1, 100); //���� ������ ����ο��� �ʱ�ȭ�� �ʼ�
    int& r2 = CalSum(1, 10);
    //cout << "r1:" << r1 << ", r2:" << r2 << endl;
    cout << "r1:" << r1 << ", r2:" << r2 << endl;

    return 0;
}

int& CalSum(int s, int e)
{
    int sum = 0;
    for (; s <= e; s++)
    {
        sum += s;
    }
    return sum;
}