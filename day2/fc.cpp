#include<iostream>
using namespace std;
int main()
{
	int initial , final, step, d;
	
	d = (5.0 * (initial - 32)) / 9.0;

	while (initial <= final)
	{
		cout << initial << " " << d << " " << final << endl;
		initial = initial + 50;
	}
	return 0;

}