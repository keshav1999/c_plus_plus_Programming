#include<iostream>
using namespace std;
const int DIM = 8;
bool ghodazinda(int mat[][DIM], int x, int y)
{
	if (x == 0 && y == 0)return false;
	return (x >= 0 && x < DIM && y >= 0 && y < DIM && mat[x][y] == 0);
}
bool bhagghodabhag(int mat[][DIM], int x, int y, int move)
{
	if (move == 64)
	{
		return true;
	}
	int rowdir[] = { +1, +2, +2, +1, -1, -2, -2, -1};
	int coldir[] = { +2, +1, -1, -2, -2, -1, +1, +2};
	for (int dir = 0; dir < 8; dir++)
	{
		int nextx = x + rowdir[dir];
		int nexty = y + coldir[dir];
		if (ghodazinda(mat, nextx, nexty))
		{
			mat[nextx][nexty] = move;
			bool success = bhagghodabhag(mat, nextx, nexty, move + 1);
			if (success) return true;
			mat[nextx][nexty] = 0;

		}

	}
	return false;
}
void printghoda(int mat[][DIM])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[DIM][DIM] = {};
	bool success = bhagghodabhag(arr, 0, 0, 1);
	if (success)
	{
		printghoda(arr);
	}
	else
	{
		cout << "KO";
	}
}