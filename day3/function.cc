#include<iostream>
using namespace std;
int count(int n)
{
	int count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}
int main()
{
	int N, ans;
	cin >> N;
	ans = count(N);
	cout << ans;
}