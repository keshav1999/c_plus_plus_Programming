#include<iostream>
using namespace std;
void checknum(int n)
{
	if(n==0)
	{
		cout<<"ZERO ";
	}
	else if(n==1)
	{
		cout<<"ONE ";
	}
	else if(n==2)
	{
		cout<<"TWO ";
	}
	else if(n==3)
	{
		cout<<"THREE ";
	}
	else if(n==4)
	{
		cout<<"FOUR ";
	}
	else if(n==5)
	{
		cout<<"FIVE "; 
	}
	else if(n==6)
	{
		cout<<"SIX ";
	}
	else if (n==7)
	{
		cout<<"SEVEN ";
	}
	else if(n==8)
	{
		cout<<"EIGHT ";
	}
	else if(n==9)
	{
		cout<<"NINE ";
	}
	
}
void NUMWORD(int N)
{
 if(N==0)
 {
 	return;
 }
 
 NUMWORD(N/10);
 checknum(N%10);
}
int main()
{
	int N;
	cin>>N;
	NUMWORD(N);
}