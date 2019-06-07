#include<iostream>
using namespace std;
void spiral(int Arr[][10], int m, int n)
{
	int top = 0, left = 0, right = n - 1, bottom = m - 1;
	int totalitem = m * n;
	int myitem = 0;
	while (myitem < totalitem)
	{
		for (int i = left; i <= right && top <= bottom; i++)
		{
			cout << Arr[top][i] << ", ";
			myitem++;
		}
		top++;
		for (int i = top; i <= bottom && left <= right; i++)
		{
			cout << Arr[i][right] << ", ";
			myitem++;
		}
		right--;
		for (int i = right; i >= left && top <= bottom; i--)
		{
			cout << Arr[bottom][i] << ", ";
			myitem++;
		}
		bottom--;
		for (int i = bottom; i >= top && left <= right; i--)
		{
			cout << Arr[i][left] << ", ";
			myitem++;
		}
		left++;
	}
}

int main()
{
	int arr[10][10], M, N;
	cin >> M >> N;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	spiral(arr, M, N);
	cout<<"END";

	return 0;
}