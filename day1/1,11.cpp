#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, n, a;
	cout << "Enter a number and the power\n";
	cin >> m >> n;
	a = pow(m, n);
	cout << a;
	return 0;
}