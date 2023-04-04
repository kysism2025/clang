//string 형식 개요
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "hello";
    string s2 = "hello";
    string s3;

    if (s == s2)
    {
        cout << "서로 같아요." << endl;
    }
    else
    {
        cout << "서로 달라요." << endl;
    }

    s3 = s;
    cout << "s3 is " << s3 << endl;
    return 0;
}