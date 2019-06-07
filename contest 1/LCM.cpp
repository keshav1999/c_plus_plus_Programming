#include<iostream>
using namespace std;
int main()
{
	int N1, N2, a = 1 , b = 1 ;
	cin >> N1 >> N2;
	if (N1 >= N2)
	{
		for (int i = 1; i <= N1; i++)
		{
			a = i * N1;
			if (a % N2 == 0)
			{
				cout << a;
				break;
			}

		}

	}
	else
	{
		for (int k = 1; k <= N2; k++)
		{
			b = k * N2;
			if (b % N1 == 0)
			{
				cout << b;
				break;
			}
		}
	}

	return 0;
}