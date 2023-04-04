//참조 반환
#include <iostream>
using namespace std;

int& CalSum(int s, int e);
int main()
{
    int& r1 = CalSum(1, 100); //참조 변수는 선언부에서 초기화는 필수
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