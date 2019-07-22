//to print prime numbers between the two intervals of number
#include<iostream>
using namespace std;
int main()
{
	int N, low, high, count;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> low >> high;
		while (low < high)
		{
			count = 0;
			for (int j = 2; i <= low/2; i++)
			{
				if (low % i == 0)
				{
					count = 1;
					break;
				}
			}
			if (count == 0)
			{
				cout << low << "\n";
			}


			low++;
		}
		cout<<endl;

	}
	return 0;
}