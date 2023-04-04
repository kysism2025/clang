#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Complex//복소수 클래스
{
    //멤버 필드(멤버 변수)
    double image;
    double real;
public:
    Complex(double real = 0, double image = 0);//생성자   
    double GetImage()const;//허수 접근자(가져오기)   
    double GetReal()const;//실수 접근자(가져오기)
    void SetImage(double image);//허수 설정자(설정하기)   
    void SetReal(double real);//실수 설정자(설정하기)
    void View()const;//정보 출력   
};