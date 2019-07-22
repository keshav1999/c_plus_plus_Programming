#include<iostream>
using namespace std;
int main()
{
	long long int a,b,sum;
	cin>>a>>b;
    sum=a+b;
    if(sum>1e9)
    {
    	sum=-1e9+(sum-1e9)-1;
    	cout<<sum;
    }
    else if(sum<-1e9)
    {
    	sum=1e9+(sum+1e9)+1
       cout<<sum;
    }
    else
    	cout<<sum;


}