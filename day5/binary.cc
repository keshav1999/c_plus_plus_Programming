#include<iostream>
using namespace std;
void inputArr(long long int arr[], long long  int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}
long long int binary(long long int arr[], long long int n, long long int x)
{
	int be = 0;
	int en = n - 1;
	while (be <= en)
	{
		int mid = (be + en) / 2;
		if (arr[mid]==x)
		{
			return mid;
		}
		else if(x<arr[mid])
		{
			en=mid-1;
		}
		else
		{
			be=mid+1;
		}

	}
	return -1;
}
int main()
{
	long long int A[1000],N,X;
	cin>>N;
	inputArr(A,N);
	cin>>X;
	long long int a=binary(A,N,X);
	cout<<a;
}