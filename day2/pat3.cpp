#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "enetr the value\n";
	cin >> N;
	for (int one = 1; one <= N; one++)
	{
		for (int two = N - 1; two <= 1; two++)
		{
			cout << " ";
		}
		for (int three = one; three <= 2 * one - 1; three++)
		{
			cout << three;

		}
		three=three-1;
		for (int four = three - 2; four >= three; --four)
		{
			cout << four;
		}
		cout << endl;


		}
	}