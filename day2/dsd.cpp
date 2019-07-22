#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter the value\n";
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = N - i; j >= 1; --j)
			cout << " ";

		for (int k = 1; k <= 2 * i - 1; k++)
		{
			cout << k;
		}


		cout << endl;
	}
}