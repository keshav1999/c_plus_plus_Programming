#include<iostream>
#include<stack>
using namespace std;
void stcke(int n)
{
stack<int>mystack;
stack<int>mystack2;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		mystack.push(x);
	}

	for (int i = 0; i < n; i++)
	{
       mystack2.push (mystack.top());
       mystack.pop();
	}	
	for(int i=0;i<n;i++)
	{
		cout<<mystack2.top()<<endl;
		mystack2.pop();
	}
}
int main()
{
	int n;
	cin>>n;
	stcke(n);
	return 0;
}