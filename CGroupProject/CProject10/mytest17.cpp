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
        cout << "���� ���� num:" << ::num << endl;//������ ������(::)�� ������
        cout << "��� �ʵ� num:" << this->num << endl; //this->��� �ʵ��
        cout << "���� ���� num:" << num << endl;
    }
};

int main()
{
    Demo* demo = new Demo(2);
    demo->View(3);
    delete demo;
    return 0;
}