#include<iostream>
using namespace std;
int sumdigit(int N)
{
	if (N == 0)
	{
		return 0;
	}
	int sum = N % 10 + sumdigit(N / 10);
	return sum;
}
int main()
{
	int N;
	cin >> N;
	int ans = sumdigit(N);
	cout << ans;
}