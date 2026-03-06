#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int x, y, i, j, a, b, p, q, s;
  while (cin >> x >> y && x && y)
  {
    int arr[x][y];
    for (i = 0; i < x; i++)
    {
      for (j = 0; j < y; j++)
      {
        cin >> arr[i][j];
        if (arr[i][j] == 1)
          a = i, b = j;
        else if (arr[i][j] == 2)
          p = i, q = j;
      }
    }
    if (a > p)
      s = (a - p);
    else
      s = (p - a);
    if (b > q)
      s += (b - q);
    else
      s += (q - b);
    cout << s << endl;
  }
  return 0;
}
