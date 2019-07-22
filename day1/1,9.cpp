#include<iostream>
using namespace std;
int main()
{
	int n, ans;
	cout << "enter a number\n";
	cin >> n;
	ans = (n * (n + 1) * (2 * n + 1)) / 6;
	cout << ans;
	return 0;
}