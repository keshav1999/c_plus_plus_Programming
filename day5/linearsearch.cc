#include<iostream>
using namespace std;
long long int search(long long int N, long long int M, long long int A[])
{
	int r=-1;
	for (int i = 0; i < N; i++)
	{

		if (A[i] == M)
		{
			r=i;
			break;
		}
	}
	return r;
}
int main()
{
	long long int n, b, m, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	b = search(n, m, a);
	cout<<b;
	return 0;
	
}