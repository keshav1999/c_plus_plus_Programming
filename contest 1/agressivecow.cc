#include<iostream>
using namespace std;
void bubblesort(long long int N, long long int A[])
{
	for (int i = 0; i < N; i++)
	{
		int rem = N - i - 1;
		for (int j = 0; j < rem; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(A[j], A[j + 1]);
			}
		}
	}
}
void agressive(long long int n,long long int w,long long int B[])
{
   long long int p=n-w
}
int main()
{
	long long int N, A[100000], C;
	cin >> N;
	cin >> C;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	bubblesort(N, A);
	
return 0;
}