#include<iostream>
using namespace std;
int main()
{
    int flag=0;
    int n;
    int A[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[A[i]]<0 )
        {
            cout<<"duplictefound";
            flag=1;
            break;

        }
        A[A[i]]=-A[A[i]];

    }
    if(flag==0)
    {
        cout<<"No dupplicate found ";
    }
}