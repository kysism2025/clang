//Complex.cpp
#include "Complex.h"

Complex::Complex(double real, double image)
{

    cout << "�ԷµȰ�Ȯ��" << real << "::" << image << endl;

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
    if ((real != 0) && (image != 0))//�Ǽ���, ����� ��� 0�� �ƴ� ��
    {
        cout << real << "+" << image << "i" << endl;
    }
    else //�Ǽ��γ� ����� �߿� �ּ� �ϳ��� 0�� ��
    {
        if (image != 0)//����ΰ� 0�� �ƴ� ��(�Ǽ��δ� 0)
        {
            cout << image << "i" << endl;
        }
        else//����ΰ� 0�� ��
        {
            cout << real << endl;
        }
    }
}