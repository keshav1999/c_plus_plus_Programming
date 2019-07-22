#include<iostream>
using namespace std;
int  swap(int &x,int &y)
{
int temp=y;
y=x;
x=temp;

}
int main()
{
	int x=2,y=3;
	
	cout<<x<<y<<endl;
	swap(x,y);
	cout<<x<<y;

}