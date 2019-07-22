#include<iostream>
using namespace std;
void inputArr(long long int arr[], long long  int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}

void outputArr(long long int arr[], long long int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}
void insertionsort(long long int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
	   long long value =arr[i];
	   int hole=i;
	   while(hole>0&&(arr[hole-1]>value))
	   {
	   	arr[hole]=arr[hole-1];
	   	hole--; 
	   }	
      arr[hole]=value;
	
	}
}
int main()
{
	long long int N,A[1000];
	cin>>N;
	inputArr(A,N);
	insertionsort(A,N);  
	outputArr(A,N);
	return 0;
}