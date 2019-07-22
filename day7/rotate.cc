#include<iostream>
using namespace std;
void output(long long int A[][1000],long long int n)
{
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[j][i]<<" ";
		}
		cout<<endl;
	}
}
void rotate(long long int mat[][1000],long long int n)
{
	int mat2[1000][1000];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			mat2[i][j]=mat[j][i];
		}

}
int main()
{
	long long int mat[1000][1000],n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
		}
	rotate(mat,n);
	output(mat,n);
	return 0;
}