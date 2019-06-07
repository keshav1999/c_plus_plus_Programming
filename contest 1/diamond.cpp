#include<iostream>
using namespace std;
int main()
{
	int N, n;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0 || i == (N - 1))
			{
				cout << "*";
			}
			else if (i == (N / 2))
			{
				if (j == 0 || j == N - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else if (i > 0 && i < (N / 2))
			{
				if (j < (N / 2 + 1) - i)
				{
					cout << "*";
				}
				else if (j >= N / 2 + i)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}

			}
			else if (i > (N / 2) && i < (N - 1))
			{
				if (j < (i + N / 2) - (N - 2))
				{
					cout << "*";
				}
				else if (j >= (N - i) + (N / 2 - 1))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}

			}
		}

		cout << endl;
	}


}
