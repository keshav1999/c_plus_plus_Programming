#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter a number upto which prime numbers are to be printed\n";
	cin >> N;
	for (int cnum = 2; cnum <= N; cnum++)
	{
		int divi = 2;
		int flag = 1;
		while (divi < cnum)
		{
			if (cnum % divi == 0)
			{
				flag = 0;
				break;
			}
			divi++;
		}
		if (flag == 1)
		{
			cout << cnum << endl;
		}
	}
	return 0;
}