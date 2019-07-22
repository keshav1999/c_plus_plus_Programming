/*using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 2;; i++)
	{
		int divi = 2;
		while (divi < i)
		{
			if (i % divi != 0)
			{
				count++;
			}
			++divi;
		}
		if(count==n)
		{
			cout<<count;R
			break;
		}
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int a, j = 2, c = 0;
	cin >> a;
	if (a > 1)
	{
		for (int i = 2; i < (a * a); i++)
		{	for ( j = 2; j < i; j++)
			{
				if (i % j == 0)
					break;

			}
			if (i == j)
			{
				c++;
				if (c == a)
				{
					cout << i;  return 0;
				}
			}
		}
	}
	else
		cout<<2;
	return 0;
}