#include<iostream>
using namespace std;
void inputArr(long long int arr[], long long  int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}

int main()
{
	long long int array[1000000], N;
	cin >> N;
	inputArr(array, N);
	for (int i = 0; i < N; i++)
	{
		if (array[i] == 0)
		{
			cout << "0" << endl;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (array[i] == 1)
		{
			cout << "1" << endl;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (array[i] == 2)
		{
			cout << "2" << endl;
		}
	}
}