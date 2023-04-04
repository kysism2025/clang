//함수 중복 정의
//Program.cpp

#include <iostream>
using namespace std;

int GetMax(int a, int b)
{
    cout << "int GetMax(int a,int b)" << endl; //테스트를 위한 출력
    if (a > b)
    {
        return a;
    }
    return b;
}

char GetMax(char a, char b)
{
    cout << "char GetMax(char a,char b)" << endl; //테스트를 위한 출력
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    cout << GetMax(2, 3) << endl;   //int GetMax(int a, int b);를 호출
    cout << GetMax('a', 'b') << endl; //char GetMax(char a,char b);를 호출
    return 0;
}