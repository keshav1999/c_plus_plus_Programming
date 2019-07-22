#include<iostream>
using namespace std;
int fact(int n)
{
	if(n<=0)
	{
		return 1;
	}
	int D=n*fact(n-1);
	return D;

}
int main()
{
	int N;
	cin>>N;
	int ans=fact(N);
	cout<<ans;
}