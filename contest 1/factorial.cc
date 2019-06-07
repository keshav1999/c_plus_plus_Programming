#include<iostream>
using namespace std;
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return (n*fact(n-1));
}
int main()
{
	int a,N;
	cin>>N;
	a=fact(N);
	cout<<a;
	return 0;
}