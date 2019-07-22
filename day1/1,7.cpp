// to check a number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int a, count = 0;
	cout << "Enter a number\n";
	cin >> a;
	for (int i = 2; i <= a / 2; i++)
	{
		if (a % i == 0)
		{
			count++;
		}

	}
	if (count > 0)
	{
		cout << " it is not a prime number\n";	/* code */
	}
	else {cout << "prime number\n";}
}
