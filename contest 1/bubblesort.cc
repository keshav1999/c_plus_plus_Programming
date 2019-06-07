#include<iostream>
using namespace std;
void inputArr(long long int arr[], long long  int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}

void outputArr(long long int arr[], long long int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
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
	long long int A[1000], N;
	cin >> N;
	inputArr(A, N);
	bubbleSort(A, N);
	outputArr(A, N);
}