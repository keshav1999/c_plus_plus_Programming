#include<iostream>
using namespace std;
int main()
{
	int i,a,sum=0;
	cout<<"enter value\n";
	cin>>i;
	while(i>0)
	{
		cin>>a;
		
		sum=sum+i;
		i--;

	}
	cout<<endl<<sum;
	return 0;
	}
