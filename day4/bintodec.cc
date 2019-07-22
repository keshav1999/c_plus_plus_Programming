#include<iostream>
using namespace std;
long long dectobin(long long int N)
{
	long long int d,e=0;
	while(N>0)
	{
		d=N%2;
		e=e*10+d;
		
		N/=2;
        
	}
	return e;
}
int main()
{
	long long int n,s;
	cin>>n;
	s=Bintodec(n);
	cout<<s;
	return 0;
}