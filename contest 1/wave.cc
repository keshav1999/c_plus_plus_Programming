#include<iostream>
using namespace std;
void wave(int A[][10], int n, int m)
{
	int left = 0;
	int elementstoprint = n * m;
	int myelement = 0;
	while (myelement < elementstoprint)
	{
		int right = m - 1, top = 0, bottom = n - 1;
		for (int i = top; left <= right && i <= bottom; i++)
		{
			cout << A[i][left] << ", ";
			myelement++;
		}
		left++;
		for (int i = bottom; left <= right && i >= top; --i)
		{
			cout << A[i][left] << ", ";
			myelement++;
		}
		left++;
	}
}
int main()
{
	int mat[10][10], n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> mat[i][j];
		}
	wave(mat, n, m);
	cout<<"END";
	return 0;
}