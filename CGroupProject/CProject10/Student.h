#include <string>
using namespace std;

#define DEF_IQ 100 //����Ʈ IQ
#define MAX_IQ 300 //�ִ� IQ

class Student
{
    const int num; //�� ���� ���ȭ ��� �ʵ�
    string name;
    int hp;
    static const int max_hp; //���� ���ȭ ��� �ʵ�
public:
    Student(int _num, string _name);
    void View()const;//���ȭ ��� �޼���
};