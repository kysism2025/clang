#include <iostream>
using namespace std;

int& AddNum(int& arg) // 참조자 반환
{
	arg++;

	return arg;
}

int main(void)
{
	int num1 = 1;
	int& num2 = AddNum(num1); // num1과 num2는 별개의 변수가 됨

	num1++;

	std::cout << num1 << std::endl; // 3
	std::cout << num2 << std::endl; // 2

	int& num3 = AddNum(num1); // 참조자로 받았기 때문에 num1과 num3은 같음

	num1++;

	std::cout << num1 << std::endl; // 5
	std::cout << num3 << std::endl; // 5

	return 0;
}