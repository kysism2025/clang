#include <iostream>
using namespace std;

class DemoClass
{
    int num;
public:
    DemoClass(int _num)
    {
        num = _num;
    }
    void View()
    {
        cout << "번호:" << num << endl;
    }

};

int main()
{
    DemoClass dc1(3);
    DemoClass dc2(dc1); //복사 생성자에 의해 dc1의 메모리를 dc2 메모리에 복사

    dc1.View();
    dc2.View();
    return 0;
}