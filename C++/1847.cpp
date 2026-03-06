#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c, s = 0;
  cin >> a >> b >> c;
  if (a > b && b <= c)
    cout << ":)" << endl;
  else if (a < b && b >= c)
    cout << ":(" << endl;
  else if (a < b && b < c && (c - b) < (b - a))
    cout << ":(" << endl;
  else if (a < b && b < c && (c - b) >= (b - a))
    cout << ":)" << endl;
  else if (a > b && b > c && (b - c) < (a - b))
    cout << ":)" << endl;
  else if (a > b && b > c && (b - c) >= (a - b))
    cout << ":(" << endl;
  else if (a == b && b < c)
    cout << ":)" << endl;
  else if (a == b && b > c)
    cout << ":(" << endl;
  else
    cout << ":(" << endl;
  return 0;
}
