#include<iostream>
void hanoi(int, char, char, char);
int main()
{
	int n;
	std::cout << "Please enter the plate you want to remove：";
	std::cin >> n;
	hanoi(n, 'a', 'b', 'c');
	std::cout << "Congratulations！" << std::endl;
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1) std::cout << "把编号为 " << n << " 的圆盘从 " << a << " 针移动到 " << c << " 针" << std::endl;
	else
	{
		hanoi(n - 1, a, c, b);
		std::cout << "把编号为 " << n << " 的圆盘从 " << a << " 针移动到 " << c << " 针" << std::endl;
		hanoi(n - 1, b, a, c);
	}
}
