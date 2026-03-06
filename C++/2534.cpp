#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int x, y;
  while (cin >> x >> y && x && y)
  {
    int num[x], qu[y];
    int n = sizeof(num)/sizeof(num[0]);
    for (int i = 0; i < x; i++)
    {
      cin >> num[i];
    }
    sort(num, num + n,greater<int>());
    while (y--)
    {
      int p;
      cin >> p;
      cout << num[p-1] << endl;
    }
  }
  return 0;
}
