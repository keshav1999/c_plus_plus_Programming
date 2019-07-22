#include<iostream>
using namespace std;
int main()
{
	int  yr;
	cout << "Enter the year\n";
	cin >> yr;
	if (yr % 4 == 0)
	{
		if (yr % 100 == 0)
		{
			if (yr % 400 == 0) {cout << "leap year";}
			else {cout << "not a leap year";}
		}
		else {cout << "leap yar";}
	}
	else {cout << "not a leap year";}
	return 0;

}