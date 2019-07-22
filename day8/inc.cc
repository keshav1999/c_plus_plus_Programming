#include<iostream>
using namespace std;
void inc(int n)
{
	if (n <= 0)
	{
		return ;
	}
	inc(n - 1);
	cout << " " << n;

}

void decreasingorder(int n)
{
	if (n <= 0)
	{
		return;
	}
	cout << n << " ";
	decreasingorder(n - 1);
}
int  powerfunction(int n, int k)
{
     if(k<=0)
     {
     	return 1;
     }
     int ans=n*powerfunction(n,k-1);
     return ans;

}
int fabonacci(int N)
{
	if(N==1)
	{
		return 0;
	}
	if(N==2)
	{
		return 1;
	}
	ans =fabonacci(n-1)+fabonacci(n-2);
	return ans;

}
void display(int arr[],int n)
{
	
}
int main()
{
	int N,K,A[10];
	cin >> N;
	for(int i=0;i<N;i++)
	{
      cin>>A[i];
	}
	// cin>>K;
	// //inc(N);
	// //decreasingorder(N);
	// int a=powerfunction(N,K);
	// fabonacci(N);
	// cout<<a;
	return 0;
}