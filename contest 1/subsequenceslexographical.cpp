#include <bits/stdc++.h>
using namespace std;
void subset(string str, int be, int i, vector<string>&ans) {
  if (str[be]=='\0') {
    ans[i]='\0';
    ans.push_back(str);
    return;
  }
    //swap(str[be], str[j])
    subset(str, be + 1,  i , ans);
    ans[i]=str[be];
    subset(str,be+1,i+1,ans);
    //swap(str[be], st
}
int main() {
  string str;
  cin >> str;
  vector<string>ans;
  subset(str, 0, 0, ans );
  sort(ans.begin(), ans.end());

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }
}