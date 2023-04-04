#include <iostream>
using namespace std;

int& CalSum(int s, int e, int& sum);
int main()
{
    int sum = 0;
    int& r1 = CalSum(1, 100, sum); //참조 변수는 선언부에서 초기화는 필수
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