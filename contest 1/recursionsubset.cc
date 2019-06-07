#include<iostream>
#include<cmath>
using namespace std;
void countsubset(char stri[])
{
	int i = 0;
	while (stri[i] != 0)
	{
		i++;
	}
   int count=pow(2,i);
   cout<<count<<endl;
}
void subset(int be, char string[], char code[], int i)
{
	if (string[be] == '\0')
	{
		code[i] = '\0';
		cout << code <<endl;
		return;
	}
	subset(be + 1, string, code, i);
	code[i] = string[be];
	subset(be + 1, string, code, i + 1);
}
int main()
{
	char string[100];
	char code[100] = {};
	cin >> string;
     countsubset(string);
	subset(0, string, code, 0);
}