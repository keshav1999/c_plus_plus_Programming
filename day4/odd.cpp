#include<iostream>
using namespace std;
int odd(int n)
{
	int odd=1;
	while (odd<= n)
	{
		if (odd % 2 != 0)

		{
			cout << odd << endl;
		}
		odd++;
	}
	return 0;


}
int main()
{
	int N, a;
	cin >> N;
	cout << odd(N);
	return 0;
}