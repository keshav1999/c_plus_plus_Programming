#include<iostream>
#include<cstring>
using namespace std;
void stringcompare(char string[])
{
    char searchIn [20][20] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"};
        
}
void charOnButton(char digit, char code[]) {
    char keyComb[][5] = {
        "0",
        "#?*", "abc", "def",
        "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"
    };
    strcpy(code, keyComb[digit - '0']);
}


void printCodes(char numCode[], int be, char ans[], int i)
{
    if (numCode[be] == '\0') {
        ans[i] = '\0';
        //cout << ans << endl;
        stringcompare(ans);
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

    printCodes(numCode, 0, ans, 0);
}
