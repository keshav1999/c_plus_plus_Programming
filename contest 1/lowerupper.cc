#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(c>='A'&&c<='Z')
	{
		cout<<"UPPERCASE";
	}
	else if(c>='a'&&c<='z')
	{
		cout<<"lowercase";
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}