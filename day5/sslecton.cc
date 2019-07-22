#include<iostream>
using namespace std;
void selection(int A[],int N)
{
	int C[100]
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(A[i]>A[j])
			{
				A[j]=A[i];
			}
		}
	}
	for(int k=0;k<N;k++)
		{
			cout<<A[k]<<" ";
		}
}
void largest
int main()
{
	int n;
	cin>>n;
	int A[100];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	selection(A,n);
}