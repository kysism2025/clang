#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Complex//���Ҽ� Ŭ����
{
    //��� �ʵ�(��� ����)
    double image;
    double real;
public:
    Complex(double real = 0, double image = 0);//������   
    double GetImage()const;//��� ������(��������)   
    double GetReal()const;//�Ǽ� ������(��������)
    void SetImage(double image);//��� ������(�����ϱ�)   
    void SetReal(double real);//�Ǽ� ������(�����ϱ�)
    void View()const;//���� ���   
};