#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	do
	{
		if ((ch == '+') || (ch == '-') || (ch == '/') || (ch == '*') || (ch == '%'))
		{
			int N1, N2;
			cin >> N1 >> N2;
			if (ch == '+')
			{
				cout << N1 + N2;
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
					break;
				}
				else
				{
					cout << N1 / N2;
				}
			}
			else if (ch == '%')
			{
				if (N2 == 0)
				{
					break;
				}
				else
				{
					cout << N1 % N2;
				}
			}
			else
			{
				cout << "Invalid operator";
				break;
			}
		}
	}
	while ((ch == 'x') || (ch == 'X'))

	}