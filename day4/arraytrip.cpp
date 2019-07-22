#include<iostream>
using namespace std;
void bubbleSort(long long int arr[], long long int n)
{
	for (int cur = 0; cur < n; ++cur)
	{
		int rem = n - cur - 1;  // dil ka dard
		for (int i = 0; i < rem; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
			}
		}
	}
}
int main()
{
	long long int N, Target, A[1000];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	bubbleSort(A,N);
	cin >> Target;
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			for (int k = j+1; k < N; k++)
			{
				if ((A[i] + A[j] + A[k]) == Target)
				{
							cout << A[i] << ", " << A[j] << " and " << A[k] << endl;

				}
			}
		}
	}
	return 0;

}