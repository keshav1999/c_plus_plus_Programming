#include<iostream>
using namespace std;
void waterharvesting(int A[], int head, int j, int &sum, int n)
{
	if (n < 0);
	{
		return;
	}
	 if (A[j] >= head)
	{
		head = A[j];
		j++;
		n--;
		waterharvesting(A, head, j, sum, n);

	}

	else if (A[j] < head)
	{
		sum = sum + (head - A[j]);
		j++;
		n--;

		head = A[j];


	}
	waterharvesting(A, head, j, sum, n);
}
int main()
{
	int n, A[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int p = A[0];
	int q=0;
	waterharvesting(A, p, 1, q, n);
	cout << q;
}
