#include<iostream>
using namespace std;
void input( int arr[],   int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}

void output( int arr[],  int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}
void bubblesort(int arr[],int n)
{
    if(n<=0)
    {
    	return;
    }	
    for(int j=0;j<n-1;j++)
    {
    	if(arr[j]>arr[j+1])
    	{
    		swap(arr[j],arr[j+1]);
    	}
    }
    bubblesort(arr,n-1);
}
int main()
{
	int N,A[100];
	cin>>N;
	input(A,N);
	bubblesort(A,N);
	output(A,N);

}