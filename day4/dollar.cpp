#include<iostream>
using namespace std;
int main()
{
  int count =0;
  char c;
  while(cin>>c)
  {
  	if(c=='$')
  	{
  		count++;
  		break;
  	}
  	else
  		count++;
  }
  cout<<count;
}