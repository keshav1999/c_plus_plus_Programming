#include<iostream>
using namespace std;
int main()
{
	int len, wid, peri, area;
	cout << "Enter the length nd width of the retangle\n";
	cin >> len >> wid;
	peri = 2 * (len + wid);
	area = len * wid;
	cout << "the perimeter of rectangle is " << peri << " and its area is " << area;
	return 0;
}