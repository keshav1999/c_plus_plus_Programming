#include<iostream>
using namespace std;
void input(long long int ar[], long long int p)
{
	for (int i = 0; i < p; i++)
	{
		cin >> ar[i];
	}
}
long long int largest(long long int ARR[], long long int be, long long int en)
{
	long long int pos = be;
	while (be <= en)
	{
      if(ARR[be]>ARR[pos]) 
      {
      	pos=be;
      }
      ++be;
	}
	return pos;
}
void selection(long long int A[],long long int N)
{
	for (int i = N - 1; i >= 0; --i)
	{
		int pos = largest(A,0,i);
		swap(A[pos],A[i]);
	}
}
int main()
{
	long long int n, arr[1000];
	cin >> n;
	input(arr, n);
	selection(arr, n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}