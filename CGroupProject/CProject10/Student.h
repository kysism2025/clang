#include <string>
using namespace std;

#define DEF_IQ 100 //디폴트 IQ
#define MAX_IQ 300 //최대 IQ

class Student
{
    const int num; //비 정적 상수화 멤버 필드
    string name;
    int hp;
    static const int max_hp; //정적 상수화 멤버 필드
public:
    Student(int _num, string _name);
    void View()const;//상수화 멤버 메서드
};