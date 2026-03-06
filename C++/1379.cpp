#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  ll a, b;
  while (cin >> a >> b && a && b)
  {
    cout << a - (b - a) << endl;
  }

  return 0;
}
