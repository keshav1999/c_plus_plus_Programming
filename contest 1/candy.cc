#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int A[100],B[100];
	for(int p=0;p<n;p++)
	{
		cin>>A[p];
	}
	int sum=0;
	B[0]=A[0];
	for(int k=1;k<n;k++)
	{
		B[k]=A[k]+B[k-1];
	}
	
return 0;
}