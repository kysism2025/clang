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
        cout << "��ȣ:" << num << endl;
    }

};

int main()
{
    DemoClass dc1(3);
    DemoClass dc2(dc1); //���� �����ڿ� ���� dc1�� �޸𸮸� dc2 �޸𸮿� ����

    dc1.View();
    dc2.View();
    return 0;
}