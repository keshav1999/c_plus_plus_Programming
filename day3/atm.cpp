#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y>=(x+0.5))
{
if(x%5==0)
 {cout<<y-x-0.5;}
 else cout<<y;
}
else{cout<<y;}
return 0;
}