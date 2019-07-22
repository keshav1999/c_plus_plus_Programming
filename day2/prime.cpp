#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int divi = 2;
	int flag = 1;
	while (divi <= n)
	{
		if (n % divi == 0) {
			flag = 0;
			break;
		}
		++divi;
	}
	if (flag == 0) {
		cout << "not a prime number";
	}
	else {cout << "a prime numer";}
	return 0;
}