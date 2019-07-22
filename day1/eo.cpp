//to find weather a number is even or odd

#include<iostream>
using namespace std;
int main()
{
	int x,y,z,q;
	cout<<"enter two number";
	cin>>x>>y;
	z=x%y;
	q=x/y;
	if(z==q)
	{cout<<"magic number";}
	else 
	{cout<<"normal number";}

}