#include<iostream>
using namespace std;
int main()
{
	char a;
	int b;
	cout << "enter the character\n";
	cin >> a;
	b = a;
	if ((b >= 65) && (b <= 90))
	{
		cout << "uppercase";
	}
	else if ((b >= 97) && (b <= 122))
	{
		cout << "lowercase";

	}
	return 0;
}