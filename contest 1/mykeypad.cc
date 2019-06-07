#include<iostream>
#include<cstring>
using namespace std;
int lenstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void charOnButton(char digit, char code[]) {
    char keyComb[][5] = {
        "0",
        "abc", "def",
        "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"
    };
    strcpy(code, keyComb[digit - '0']);
}
int mylength(char num[], int len)
{
    char str1[5] = {};
    char str2[5] = {};
    charOnButton(num[len], str1);
    charOnButton(num[len + 1], str2);
    int len1 = lenstr(str1);
    int len2 = lenstr(str2);
    return len1 * len2;


}


void printCodes(char numCode[], int be, char ans[], int i) {
    if (numCode[be] == '\0') {
        ans[i] = '\0';
        cout << ans << " " ;
        return;
    }

    char code[5] = "";
    charOnButton(numCode[be], code);

    for (int x = 0; code[x] != '\0'; ++x) {
        ans[i] = code[x];
        printCodes(numCode, be + 1, ans, i + 1);
    }
}

int main()
{
    char numCode[100];
    char ans[100] = "";

    cin >> numCode;

    int co = mylength(numCode, 0);
    cout << co << endl;
    printCodes(numCode, 0, ans, 0);
}
