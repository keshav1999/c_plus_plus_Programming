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
bool ispalindrome(char a[])
{
	int len = lenstr(a);
	for (int i = 0; i < len; i++)
		for (int j = len - 1; len >= 0; j--)
		{
			if (a[i] == a[j])
			{
				return true;
			}
			else return false;
		}

}
void strreverse(char a[])
{
	int len = lenstr(a);
	char b[100];
	for (int i = 0; i < len; i++)
	{
		b[i]=a[i];
	}
	for (int i = 0; i < len; i++)
	{
		a[i] = b[len - i-1];
	}
	for (int k = 0; k <len; k++)
	{
		cout << a[k];
	}
}
void strrotatek(char A[],int N)
{
   int be=0;
   int end=N-1;
   int len=lenstr()
}
int main()
{

	char A[100];
	cin >> A;
	//cin>>int K;
	//lenstr(A);
	//bool ans = ispalindrome(A);
	//cout<<boolalpha<<ans;
	//strreverse(A);
	//strrotatek(A,K);

	return 0;

}