#include<iostream>
using namespace std;
void pat(int N)
{

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= 1; j++)
		{
			for (int k = 1; k <= i; k++)
			{
				cout << "*";
			}
			cout << " ";
			for (int l = N; l >= i; l--)
			{
				cout << "*";
			}
			cout << " ";
			for (int l = N; l >= i; l--)
			{
				cout << "*";
			}
			cout << " ";
			for (int k = 1; k <= i; k++)
			{
				cout << "*";
			}

			cout << " ";
		}


		cout << endl;
	}

}
int main()
{
	int n;
	cin >> n;
	 pat(n);

}