#include<iostream>
using namespace std;
void input(int N, int A[])
{
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
}
int index(int n, int x, int a[])
{
	if (n == 0)
	{
		return -1;
	}
	else if (a[n - 1] == x)
	{
		return n - 1;
	}
	index(n - 1, x, a);
}
int main()
{
	int N, A[10000], X, ans;
	cin >> N;
	input(N, A);
	cin >> X;
	    ans = index(N, X, A);
	cout << ans;
	return 0;
}