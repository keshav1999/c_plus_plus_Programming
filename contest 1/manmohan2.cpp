#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	if (N == 1)
	{
		cout << "1";
	}
	else
	{
		cout << "1\n";
		for (int i = 1; i <= N - 1; i++)
		{
			cout << i;
			for (int j = 1; j < i; j++)
			{
				cout << "0";
			}
			cout << i;


			cout << endl;
		}
	}
}