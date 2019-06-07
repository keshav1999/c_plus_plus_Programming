#include<iostream>
using namespace std;
int main()
{
	long long int N, count = 0, n[20], m[20], a, b, sum2 = 0;
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
	for (int j = 0; j < count; j++)
	{
		m[n[j] - 1] = j + 1;
	}
	for(int k=count-1;k>=0;--k)
	{
		cout<<m[k];
	}
	return 0;
}
