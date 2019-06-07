#include<iostream>
#include
using namespace std;
int main()
{
	int a, b;
	long long c, s = 1, p;
	cin >> a >> b >> c;
	while (b > 0)
	{
		s = (s * a) % c;
		b--;
	}
	p = s % c;
	cout << p;


}