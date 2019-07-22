#include<iostream>
using namespace std;
int main()
{
	long long int N, R, n = 1, r = 1, f = 1, s;
	cin >> N >> R;
	if (N >= R)
	{
		for (int i = 1; i <= N; i++)
		{
			n = n * i;
		}
		for (int j = 1; j <= R; j++)
		{
			r = r * j;
		}
		for (int k = 1; k <= (N - R); k++)
		{
			f = f * k;
		}
		s = n / (r * f);
		cout << s;
	}

}