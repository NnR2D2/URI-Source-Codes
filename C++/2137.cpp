#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int t;
  while (cin >> t && t)
  {
    int arr[t];
    fl(t) cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    fl(t) cout << setfill('0') << setw(4) << arr[i] << endl;
  }

  return 0;
}
