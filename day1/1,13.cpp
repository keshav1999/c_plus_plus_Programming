#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,i,b,c=0;
	cout<"Enter a number\n";
	cin>>a;
	while(a>0)
	{
		b=pow(a,2);
	    c=c+b;
	    a--;
	}
   cout<<c;

	}