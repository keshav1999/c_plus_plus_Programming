#include<iostream>
using namespace std;
int main()
{
	long long int N, A[1000], B[1000], C[1000], rev;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		B[i]=A[i];
	}
	cin >> rev;
	int be ,en,k=0;
	for(int i=0;i<rev;i++)
	{
		B[i]=A[rev-i-1];
	}
	for(int j=rev;j<2*rev;j++)
	{	
		B[j]=A[2*rev-1-k];
		k++;
	}
	
	for(int i=0;i<N;i++)
	{
		cout<<B[i]<<" ";
	}

	

	return 0;

}