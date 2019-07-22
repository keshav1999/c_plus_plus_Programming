#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c;
	cout<<"Eneter a number\n";
	cin>>a;
	while(a!=0)
	{   
		a/=10;
		b++	;
	}
	cout<<b;
	return 0;

}