#include <bits/stdc++.h>
using namespace std;
void printSubset(string str, int be, string ans, int i,vector<string>&ans1){
    if (str[be] == '\0'){
        ans[i] = '\0';
        ans1.push_back(ans);
        return;
    }

    printSubset(str, be + 1, ans, i,ans1);       // left
    ans[i] = str[be];
    printSubset(str, be + 1, ans, i + 1,ans1);   // selected
}
int main()
{
	string numCode;
    string  ans ;
    vector<string>ans1;

    // cin >> numCode;A

     //printCodes(numCode, 0, ans, 0);  

     string str ; cin >> str;
     printSubset(str, 0, ans, 0,ans1);
     sort(ans1.begin(), ans1.end());

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }
}