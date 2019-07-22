#include<iostream>
using namespace std;
int main()
{
	int m1, m2, m3, m4, m5, avg;
	cout << "Enter marks in 5 subjects\n";
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	avg = (m1 + m2 + m3 + m4 + m5) / 5;
	cout << "\n avg of the marks is " << avg;
	return 0;
}