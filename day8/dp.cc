#include<iostream>
using namespace std;
int *foo()
{
	//int x=10;
	//return &x;
	int *p=new int;
	*p=10;
	return p;
}
int main()
{
	// int *p=NULL;
	// p=foo();
	// cout<<*p;
	// delete p;
	int n;
	cin>>n;
	int* p=new int[n];
	delete[];
}