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
    int cnt = 0;
    ll n;
    cin >> n;
    if (n == 2)
    {
      cout << "Prime" << endl;
      continue;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
      if (n % i == 0)
      {
        cnt++;
        if (cnt == 2)
          break;
      }
    }
    if (cnt >= 1)
      cout << "Not Prime" << endl;
    else
      cout << "Prime" << endl;
  }
  return 0;
}
