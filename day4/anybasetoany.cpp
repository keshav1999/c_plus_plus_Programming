#include<iostream>
#include<math.h>
using namespace std;
int binarytodecimal(int N)
{
	long long int i=0,sum=0,d;
    while(N>0)
    {
    	d=N%10;
    	sum=sum+pow(2,i)*d;
    	i++;
    	N/=10;
    }
    cout<<sum;
    return 0;
}
void decimaltobinary(int N)
{
    int i=1,binarynum;
    while(N!=0)
    {
        binarynum=(N%2)*i;
        N/=2;
        i*=10;
    }
    cout<<binarynum;
}
long long convertOctalToBinary(int);
int main()
{
    int octalNumber;

    cin >> octalNumber;

    cout << convertOctalToBinary(octalNumber) ;

    return 0;
}

long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}