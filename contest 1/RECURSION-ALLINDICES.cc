#include<iostream>
using namespace std;
void input(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void indexes(int Arr[],int n,int x)
{
	if(n<0)
	{
		return;
	}
		indexes(Arr,n-1,x);

  	  if(Arr[n]==x)
	{
			cout<<n<<" ";
	}

	
}
int main()
{
	int N,A[100],X;
	cin>>N;
	input(A,N);
	cin>>X;
	indexes(A,N-1,X);
}