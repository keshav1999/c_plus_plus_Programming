#include<iostream>
using namespace std;
void print(int arr[100],int n)
{

	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		arr[j] = j + 1;
		sum = sum + arr[j];
	}
	cout << sum;
}
int main()
{
	int N;
	cin>>N;
    print(N);
    return 0;

}