#include<iostream>
using namespace std;
int main()
{
	int mat[10][10];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> mat[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
					{
						cout << mat[i][j]<<" ";
					}
			}
		}
		cout<<endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if ((i + j) == m - 1)
			{
					{
						cout << mat[i][j]<<" ";
					}
			}
		}
}