#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
    Student* stu = new Student(3, "ȫ�浿");
    stu->View();
    delete stu;
    return 0;
}