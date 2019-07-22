#include<iostream>
using namespace std;
void input(int n,int A[])
{
	for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
}
void large(int n, int arr[])
{	const int inf = 1e8;
	int ans = -inf;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]>ans)
			ans =arr[i];
			
	}
	cout<<ans;
}
int main()
{
	int N,A[100];
	cin>>N;
	input(N,A);
	large(N,A);
	return 0;

}
