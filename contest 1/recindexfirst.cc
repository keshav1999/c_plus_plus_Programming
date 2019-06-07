#include<iostream>
using namespace std;
void input(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
}
int  index(int A[], int be, int  en,int x)
{
	if (be>en)
	{
           return -1;       
	}
	else if(A[be]==x)
	{
		return be;
	}
	index(A,be+1,en,x);

}

int main()
{
	int N, A[100],X,B;
	cin >> N;
	input(A, N);
	cin>>X;
	B=index(A,0,N-1,X);
	cout<<B;
}