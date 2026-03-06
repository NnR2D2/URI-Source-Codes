#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c, d;
  while (cin >> a >> b >> c && a && b && c)
  {
    d = cbrt(a * b * c);
    cout << d << endl;
  }

  return 0;
}
