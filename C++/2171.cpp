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
    int a = 0, b = 0,sum_a=0;
    while (1)
    {
      a++;
      b++;
      sum_a += a;
      if (sum_a + b > t)
      {
        b = t - sum_a;
        break;
      }
      else if (sum_a + b == t)
        break;
    }
    cout << sum_a << " " << b << endl;
  }

  return 0;
}
