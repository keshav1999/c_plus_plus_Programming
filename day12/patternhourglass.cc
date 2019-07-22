#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=i-1;j>=1;j--)
    	{
    		cout<<"  ";
    	}
    	for(int k=n-i+1;k>=1;k--)
    	{
    		cout<<k<<" ";
    	}
    	cout<<"0 ";
    	for(int l=1;l<=n-i+1;l++)
    	{
    		cout<<l<<" ";
    	}
    	cout<<endl;
    }
    for(int m=0;m<=n;m++)
    {
    	if(m==n)
    	{
    		cout<<"0\n";
    	}
    	else cout<<"  ";
    }
    for(int o=1;o<=n;o++)
    {
    	for(int p=n-o;p>=1;p--)
    	{
    		cout<<"  ";
    	}
    	for(int q=o;q>=1;q--)
    	{
    		cout<<q<<" ";
    	}
    	cout<<"0 ";
    	for(int r=1;r<=o;r++)
    	{
    		cout<<r<<" ";
    	}
    	cout<<endl;
    }

    return 0;
}