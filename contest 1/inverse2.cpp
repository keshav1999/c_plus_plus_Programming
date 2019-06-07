#include<iostream>
using namespace std;
int main()
{
	int N, count = 0, n[20], m[20], a, b,sum2=0;
	cin >> N;
	a = N;

	while (a > 0)
	{
		a /= 10;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		n[i] = N % 10;
		N /= 10;
	}
	for (int j = 1; j <= count; j++)
	{
		int sum = 1;
		for (int k = n[j - 1]; k > 1; k--)
		{
			sum = sum * 10;
		}
		m[j-1] = sum;
	}
	for (int l = 0; l < count; l++)
	{
		m[l] = m[l] * (count-l);
	}
	for (int o = 0; o < count; o++)
	{
		sum2 = sum2 + m[0];

	}
	cout << sum2;

	return 0;
}