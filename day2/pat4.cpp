#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter the value\n";
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j <= i; j++)
			{
				if (j % 2 == 1)
				{
					cout << "1";
				}
				else {cout << "0";}
			}
		}
		else
			for (int k = 1; k <= i; k++)
			{
				if (k % 2 == 1)
				{
					cout << "0";
				}
				else {
					cout << "1";

				}
			}
		cout << endl;
	}
}