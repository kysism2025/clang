#include <iostream>
using namespace std;
typedef enum Gender
{
    FEMALE = 1,
    MALE
} GENDER;

struct StuInfo
{
    int num;
    char name[20];
};

void main()
{
    GENDER g = MALE; //태그 명인 Gender를 형식 명으로 사용
    StuInfo si = { 2,"홍길동" }; //태그 명인 StuInfo를 형식 명으로 사용

    cout << "성별(1-여성, 2-남성):" << g << endl;
    cout << "학생 번호:" << si.num << " 이름:" << si.name << endl;
}