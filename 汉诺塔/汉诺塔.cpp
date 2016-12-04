#include<iostream>
void hanoi(int, char, char, char);
int main()
{
	int n;
	std::cout << "请输入要移动的圆盘总数目：";
	std::cin >> n;
	hanoi(n, 'a', 'b', 'c');
	std::cout << "祝贺你，成功了！" << std::endl;
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