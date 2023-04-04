#include "Student.h"
#include <iostream>
using namespace std;

//static 멤버 필드는 멤버 필드 선언을 해야 함, 선언문에서 static 키워드 사용 안 함
const int Student::max_hp = 200; //정적 상수화 멤버 필드 초기값 지정
Student::Student(int _num, string _name) :num(_num)//비 정적 상수화 멤버 필드 초기화
{
    name = _name;
    hp = 0;

}

void Student::View()const//상수화 멤버 메서드
{
    cout << "번호:" << num << " 이름:" << name << " HP:" << hp << endl;
}