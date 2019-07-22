#include<iostream>
using namespace std;
void input( int arr[],   int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}
int binarysearch(int A[], int be, int en, int X)
{
	int mid = (be + en) / 2;
	if(be>en)
	{
		return 0;
	}

	if (A[mid] == X)
	{
		return 1;
	}
	else if (A[mid] < X)
	{
		 binarysearch(A, mid + 1, en, X);
		
	}
	 binarysearch(A, be, mid - 1, X);
   
}

int main()
{
	int N, A[100], x,b;
	cin>>N;
	input(A, N);
	cin >> x;
	int c=binarysearch(A, 0, N - 1, x);
	if(c==0)
	{
		cout<<"false";
	}
	else
	{
		cout<<"true";
	}
     
}