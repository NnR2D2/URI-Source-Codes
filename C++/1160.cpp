#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll a, b, cnt = 0;
    double a1, b1;
    cin >> a >> b >> a1 >> b1;
    while (a <= b)
    {
      a += (a * a1) / 100;
      b += (b * b1) / 100;
      cnt++;
      if (cnt > 100)
      {
        cout << "Mais de 1 seculo." << endl;
        break;
      }
      else if (a > b )
      {
        cout << cnt << " anos." << endl;
      }
    }
  }
  return 0;
}
