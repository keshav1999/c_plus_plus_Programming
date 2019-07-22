//WAP to find solutions of quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, d, sol1, sol2;
	cout << "enter the values of a,b,c of the quadratic equation\n";
	cin >> a >> b >> c;
	d = pow((b * b - 4 * a * c), 0.5);
	sol1 = (-b + d) / (2 * a);
	sol2 = (-b - d) / (2 * a);
	cout << "the discriminant is " << d << " and the solutions are " << sol1 << " and " << sol2;
	return 0;


}