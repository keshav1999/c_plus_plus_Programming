#include<iostream>
#include<cmath>
using namespace std;
void subset(int be, char string[], char code[], int i)
{
	if (string[be] == '\0')
	{
		code[i] = '\0';
		cout<<code<<endl;
		return;
	}
	code[i] = string[be];
	subset(be +1, string, code, i+1);

	subset(be +1  , string, code, i );





}
int main()
{
	char string[100];
	char code[100] = {};
	cin >> string;
	subset(0, string, code, 0);
}