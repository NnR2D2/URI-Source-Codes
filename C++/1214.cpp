#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;

  while (cin >> t)
  {
    while (t--)
    {
      int n, cnt = 0;
      double sum = 0;
      cin >> n;
      int arr[n];
      fl(n)
      {
        cin >> arr[i];
        sum += arr[i];
      }
      fl(n)
      {
        if (arr[i] > sum / n)
          cnt++;
      }
      printf("%.03lf%%\n", ((cnt / (double)n) * 100));
    }
  }
  return 0;
}
