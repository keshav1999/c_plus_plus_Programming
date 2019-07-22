#include<iostream>
using namespace std;
int main()
{
	int n;
	char c = 'A', d;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			d = c + k - 1;
			cout << d<<" ";
		}
		cout << endl;
	}
}