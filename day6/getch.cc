#include<iostream>
using namespace std;
int lenstr(char A[])
{
	int i = 0;
	while (A[i] != '\0')
	{
		i++;
	}

	return i;
}
int main()
{
	char a[100];
	cin >> a;
	int len = lenstr(a);
	char b[100], c[100];
	for (int i = 0; i < len; i++)
	{
		b[i] = a[i];
	}
	int be = 0, en = len;

	for (int i = be; i < en; i++)
	{
		c[i] = a[i];
		int count = 0;
		for (int j = 0; a[i]!= a[j]; j++)
		{
			if (a[i] == b[j])
			{
				count++;
			}
			c[i + 1] = count;
			be = count + 1;
        
		}
		

	}
}