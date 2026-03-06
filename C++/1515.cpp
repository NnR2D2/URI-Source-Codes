#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int t, a, b, x;
  while (cin >> t && t)
  {
    string s[t];
    int arr[t];
    fl(t)
    {
      cin >> s[i] >> a >> b;
      arr[i] = a - b;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    fl(n)
    {
      if (arr[i] < min)
      {
        min = arr[i];
        x = i;
      }
    }
    cout << s[x] << endl;
  }

  return 0;
}
