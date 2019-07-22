#include<iostream>
#include<cmath>
using namespace std;
bool canproceed(int num, int arr[][9], int x, int y, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[x][i] == num) return false;
		if (arr[i][y] == num) return false;
	}
	int rootDim = sqrt(n);
	int subBoxRow = x - x % rootDim;
	int subBoxCol = y - y % rootDim;
	for (int i = subBoxRow; i < subBoxRow + rootDim; ++i) {
		for (int j = subBoxCol; j < subBoxCol + rootDim; ++j) {
			if (arr[i][j] == num) return false;
		}
	}
	return true;

}
bool sudoku(int arr[][9], int x, int y, int N)
{
	if (x == N)
	{
		return true;
	}
	if (y == N)
	{
		return sudoku(arr, x + 1, 0,N);
	}
	if (arr[x][y] != 0)
	{
		return sudoku(arr, x, y + 1,N);
	}
	for (int i = 1; i <= N; i++)
	{
		if (canproceed(i, arr, x, y, N))
		{
			arr[x][y] = i;
			bool success = sudoku(arr, x, y + 1,N);
			if (success) return true;
			arr[x][y] = 0;
		}
	}
	return false;
}
void printBoard(int arr[][9], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	int N, board[9][9];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> board[i][j];
		}
	}

	bool isSuccessful = sudoku(board, 0, 0, N);
	if (isSuccessful) {
		printBoard(board, N);
	}
	else {
		cout << "Hey man! get it solved from someone else!";
	}
}