#include<iostream>
using namespace std;
int main()
{
	int N;
	char c = 'A', d,e;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j<N-i; j++)
		{
			d = c + j;
			cout << d;

		}
		for (int j = N-i-1; j>=0; j--)
		{
			e = c + j;
			cout << e;

		}
		cout << endl;
	}
	return 0;
}