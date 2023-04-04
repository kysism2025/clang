#include <iostream>
using namespace std;
int num = 1;
class Demo
{
    int num;
public:
    Demo(int num)
    {
        this->num = num;
    }
    void View(int num)const
    {
        cout << "전역 변수 num:" << ::num << endl;//스코프 연산자(::)와 변수명
        cout << "멤버 필드 num:" << this->num << endl; //this->멤버 필드명
        cout << "지역 변수 num:" << num << endl;
    }
};

int main()
{
    Demo* demo = new Demo(2);
    demo->View(3);
    delete demo;
    return 0;
}