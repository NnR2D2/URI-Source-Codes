#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int arr[10000];
int main()
{
  int t;
  char ch[10000];
  while (cin >> t && t)
  {
    int x;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < t; i++)
    {
      cin >> arr[i] >> ch[i];
    }
    int cnt = 0;
    fl(t)
    {
      flj(t)
      {
        if ((arr[i] == arr[j]) && (ch[i] != ch[j]))
        {
          cnt++;
          arr[i] = 0;
          arr[j] = 0;
          ch[i] = 0;
          ch[j] = 0;
        }
      }
    }
    cout << cnt << endl;
  }

  return 0;
}
