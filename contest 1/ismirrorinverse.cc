#include<iostream>
using namespace std;
void mirrorinverse(long long int N)
{
	long long int  count = 0, n[20], m[20], a, b, sum2 = 0;
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
	for (int k = count - 1; k >= 0; k--)
	{
		if (n[k] == m[k])
		{
			cout << "true";
			break;
		}
		else
		{
			cout << "false";
			break;
		}
	}
}
int main()
{
	long long int n;
	cin >> n;
	if (n > 0)
	{
		mirrorinverse(n);
	}
	return 0;
}