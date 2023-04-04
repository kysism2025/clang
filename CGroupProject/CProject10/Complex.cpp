//Complex.cpp
#include "Complex.h"

Complex::Complex(double real, double image)
{

    cout << "입력된값확인" << real << "::" << image << endl;

    SetReal(real);
    SetImage(image);
}

double Complex::GetImage()const
{
    return image;
}

double Complex::GetReal()const
{
    return real;
}

void Complex::SetImage(double image)
{
    this->image = image;
}


void Complex::SetReal(double real)
{
    this->real = real;
}

void Complex::View()const
{
    if ((real != 0) && (image != 0))//실수부, 허수부 모두 0이 아닐 때
    {
        cout << real << "+" << image << "i" << endl;
    }
    else //실수부나 허수부 중에 최소 하나는 0일 때
    {
        if (image != 0)//허수부가 0이 아닐 때(실수부는 0)
        {
            cout << image << "i" << endl;
        }
        else//허수부가 0일 때
        {
            cout << real << endl;
        }
    }
}