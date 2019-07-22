#include<iostream>
using namespace std;
int main()
{
	int n, cnum = 2;
	cout << "Enter the number upto which prime numbers are to be preinted\n";
	cin >> n;
	while (cnum <= n)
	{
		int divisor = 2;
		int isprime = 1;
		while (divisor < cnum) {
			if (cnum % divisor == 0)
			{
				isprime = 0;
				break;
			}
			divisor++;
		}
		if (isprime == 1) {
			cout << cnum << endl;
		}


		cnum++;
	}
    return 0;

}