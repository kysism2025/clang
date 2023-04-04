#include <iostream>
using namespace std;

int& AddNum(int& arg) // ������ ��ȯ
{
	arg++;

	return arg;
}

int main(void)
{
	int num1 = 1;
	int& num2 = AddNum(num1); // num1�� num2�� ������ ������ ��

	num1++;

	std::cout << num1 << std::endl; // 3
	std::cout << num2 << std::endl; // 2

	int& num3 = AddNum(num1); // �����ڷ� �޾ұ� ������ num1�� num3�� ����

	num1++;

	std::cout << num1 << std::endl; // 5
	std::cout << num3 << std::endl; // 5

	return 0;
}