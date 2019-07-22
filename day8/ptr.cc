#include<iostream>
using namespace std;
void swapme(int *X,int *Y)
{
	int temp=*X;
	*X=*Y;
	*Y=temp;
	cout<<* X<<" "<<* Y;
}

int main()
{
	int x=2,y=3;
	cout<<x<<" "<<y<<endl;
	swapme(&x,&y);
	return 0;
}