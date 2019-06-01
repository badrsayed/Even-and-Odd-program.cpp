#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "enter your number\n";
	cin >> number;
	if (number % 2 == 0)
		cout << "number is even\n";
	else
		cout << "number is odd\n";
	system("pause");
	return 0;
}
