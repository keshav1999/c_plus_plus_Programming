#include<iostream>
using namespace std;
int main()
{
	int N, A[100], B[100], C[100], D[100];
	bool a = false;
	cin >> N;
	if (N > 0)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> A[i];
			B[N - 1 - i] = A[i];
		}
		for (int k = 0; k < N; k++)
		{
			if (A[k] > 0 && A[k] < N - 1)
			{
				for (int i = 0; i < N; i++)
				{
					C[i] = A[i];
				}
				for (int j = 0; j < N; j++)
				{
					if (C[j] == B[j])
					{
						a = true;
					}
					else
						a = false;

				}
			}
		}
		if (a == true)
		{
			cout << "true";
		}
		else cout << "false";


	}
	return 0;
}