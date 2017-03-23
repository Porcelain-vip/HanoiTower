#include<iostream>
using namespace std;

void hanoi(int n, char a, char b, char c)
{
	if (n == 1) cout << "Move " << n << " From " << a << " To " << c << endl;
	else
	{
		hanoi(n - 1, a, c, b);
		cout << "Move " << n << " From " << a << " To " << c << endl;
		hanoi(n - 1, b, a, c);
	}
}

int main()
{
	cout << "Please input the total number of plates: ";
	int n; cin >> n;
	hanoi(n, 'a', 'b', 'c');
	cout << "Congratulations!" << endl;
	return EXIT_SUCCESS;
}
