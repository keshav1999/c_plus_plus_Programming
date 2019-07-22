#include<iostream>
using namespace std;
void input(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
int checkarray(int a[],int be,int en)
{
	
	if(be>=en)
	{
	    return 1;
	}
	if(a[be]>a[be+1])
	{
		return 0;
	}
	checkarray(a,be+1,en);

}
int main()
{
 int N,A[100],c;
 cin>>N;
 input(A,N);
 c=checkarray(A,0,N-1);
 if(c==0)
 {
 	cout<<"false";
 }
 else
 {
 	cout<<"true";
 }

}