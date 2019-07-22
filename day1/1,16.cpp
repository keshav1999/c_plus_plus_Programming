#include <iostream>
using namespace std;
int main() {
  long long  int n, a[100];
  long long int fact = 1, sum = 0, sum1, sum2 = 0;
  cin >> n;
  if (n <= 10)
  {
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      if (a[i] >= 0 && a[i] <= 20)
      {
        for (int i = 0; i < n; i++)
        {
          if (a[i] == 0)sum += fact;
          else
          {
            for (int j = a[i]; j >= 1; j--)
              fact *= j;
            sum = fact;
            fact = 1;
          }
          sum2 = (sum2 % 107 + sum % 107) % 107;
        }
      }
    cout << sum2;

  }
  return 0;
}
