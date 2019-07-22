#include<iostream>
using namespace std;
int main()
{
	char a, b;
	cout << "enter a character\n";
	cin >> a;
	b = a;
	while (b < (a + 5))
	{
		cout << b << endl;
		b++;
	}

	return 0;
}