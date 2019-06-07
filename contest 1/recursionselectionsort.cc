#include<iostream>
using namespace std;
void input(long long int ar[], long long int p)
{
	for (int i = 0; i < p; i++)
	{
		cin >> ar[i];
	}
}
void outputArr(long long int arr[], long long int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
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
    if(N<0)
    {
    	return;
    }
    else
	{
		int pos = largest(A,0,N);
		swap(A[pos],A[N]);
		selection(A,N-1);
	}
}
int main()
{
	long long int n, arr[1000];
	cin >> n;
	input(arr, n);
	selection(arr, n-1);
	outputArr(arr,n);
	return 0;
}