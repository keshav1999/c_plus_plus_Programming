#include<iostream>
#include<stack>
#include<string>
using namespace std;
int duplicatepara(string s)
{
	stack<char>stac;
	int i = 0;
	int count = 0;
	while (i < s.size())
	{
		if (s[i] == '(')
		{
			stac.push(s[i]);
		}
		else if (s[i] == '+' || s[i] == '/' || s[i] == '*' || s[i] == '-')
		{
			stac.push(s[i]);
		}
		else if (s[i] == ')')
		{

			if (stac.top() == '(')
			{
				stac.pop();
				count++;
			}
			else
			{
				while (stac.top() != '(')
				{
					stac.pop();
				}
				stac.pop();
			}
        
		}
		i++;
	}
		return count;


}
int main()
{
	string s;
	cin >> s;
	int ans = duplicatepara(s);
	cout << ans;
}
