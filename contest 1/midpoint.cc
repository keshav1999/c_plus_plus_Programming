#include<iostream>
using namespace std;
int main()
{
long long int A[1000];
long long int N;
cin>>N;
for(int i=0;i<N;i++)
{
	cin>>A[i];
}
if(N%2!=0)
{
	cout<<A[N/2];
}
else{
	cout<<A[N/2-1];
}


return 0;
}