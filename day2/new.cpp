#include<iostream>
using namespace std;
int main()
{
	int F, C;
	cout << "Enter the temprature in deg. F\n";
	cin >> F;
	C = (5.0 * (F - 32)) / 9;
	cout << "The temparature in deg. celciusius is" << C;
	return 0;
}