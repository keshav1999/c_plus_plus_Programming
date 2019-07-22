#include<iostream>
using namespace std;
void printSumToX(int arr[], int be, int en, int x){
    while(be < en){
        int sum = arr[be] + arr[en];
        if (sum == x){
            cout << arr[be] << " " << arr[en] << endl;
            ++be;
            --en;
        }
        else if (sum > x){
            --en;
        }
        else {
            ++be;
        }
    }
}
void inputArr(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}
int main() {
    int arr[100] = {};  // initialisation --> 0
    // int arr[100];    // declaration --> garbage
    int n;
    cin >> n;

    // int ans = largestInArr(arr, n);
    // cout << ans << endl;

    // inputArr(arr, n);
    // // bubbleSort(arr, n);
    // // selectionSort(arr, n);
    // insertionSort(arr, n);
    // outputArr(arr, n);

    // inputArr(arr, n);
    // int elementToSearch; cin >> elementToSearch;
    // int ans = binarySearch(arr, n, elementToSearch);
    // cout << ans;

    inputArr(arr, n);
    int x; cin >> x;
    printSumToX(arr, 0, n-1, x);

}