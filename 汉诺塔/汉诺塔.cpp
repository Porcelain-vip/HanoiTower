#include<iostream>
void hanoi(int, char, char, char);
int main()
{
	int n;
	std::cout << "������Ҫ�ƶ���Բ������Ŀ��";
	std::cin >> n;
	hanoi(n, 'a', 'b', 'c');
	std::cout << "ף���㣬�ɹ��ˣ�" << std::endl;
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1) std::cout << "�ѱ��Ϊ " << n << " ��Բ�̴� " << a << " ���ƶ��� " << c << " ��" << std::endl;
	else
	{
		hanoi(n - 1, a, c, b);
		std::cout << "�ѱ��Ϊ " << n << " ��Բ�̴� " << a << " ���ƶ��� " << c << " ��" << std::endl;
		hanoi(n - 1, b, a, c);
	}
}