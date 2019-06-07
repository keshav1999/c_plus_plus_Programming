#include<iostream>
using namespace std;
int main()
{
	char ch;
	int N1, N2;
	cin >> ch;
	do
	{
		if ((ch == '+') ||(ch == '-') || (ch == '/') || (ch == '%') || (ch == '*'))
		{
			cin >> N1 >> N2;
			if (ch == '+')
			{
				cout << (N1 + N2);
			}
			else if (ch == '-')
			{
				cout << N1 - N2;
			}
			else if (ch == '*')
			{
				cout << N1*N2;
			}
			else if (ch == '/')
			{
				if (N2 == 0)
				{
					cout << "cant process";
				}
				else
				{
					cout << N1 / N2;
				}
			}
			else if (ch == '%');
			{
				if (N2 == 0)
				{
					cout << "cant process";
				}
				else
				{
					cout << N1 % N2;
				}
			}
		}

		else
		{
			cout << "invalid operator";

		}
	}
	while ((ch == 'x') || (ch == 'X'));
		return 0;
}