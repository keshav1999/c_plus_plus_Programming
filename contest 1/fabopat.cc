#include<iostream>
using namespace std;
void fabopat(int A)
{
	int f = 0, s = 1, k;
	if (A == 1)
	{
		cout << "0 ";
	}
	else if (A == 2)
	{
		cout << "1 ";
	}
	else
	{
		while (A > 2)
		{
			k = f + s;
			f = s;
			s = k;
			A--;
		}
		cout<<k<<" ";
	}
}
int main()
{
	int k;
	cin >> k;
	int n = 0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			fabopat(n + 1);
			n++;
		}
		cout << endl;
	}
}