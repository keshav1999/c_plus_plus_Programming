#include<iostream>
using namespace std;
void input(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int  palindrome(int arr[],int be,int en)
{
	if(be>en)
	{
		return 1;
	}
	else if(arr[be]!=arr[en])
	{
		return 0;
	}
	palindrome(arr,be+1,en-1);
}
int main()
{
	int N,A[100];
	cin>>N;
	input(A,N);
	int c=palindrome(A,0,N-1);
	if(c==0)
	{
		cout<<"false";
	}
	else
	{
		cout<<"true";
	}
}