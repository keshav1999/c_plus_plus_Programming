#include<iostream>
using namespace std;
void input( int arr[],   int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}
int   sumofarray(int A[],int N)
{
	if(N<=0)
	{
		return 0;
	}
	
	int sum2=A[N-1]+sumofarray(A,N-1);
return sum2;

}
int main()
{
	int N,A[100],B;
	cin>>N;
	input(A,N);
	B=sumofarray(A,N);
	cout<<B;
}