#include<iostream>
using namespace std;
void numsub(int a, int be, int b)
{
	
	if (be > b+1)
	{
		return;
	}
	for (int i = be + 1; i <= a; i++)
	{
		cout << be << i << endl;
	}
	numsub(a,be+1,b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	numsub(a, 1, b);
}