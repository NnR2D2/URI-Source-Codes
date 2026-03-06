#include <bits/stdc++.h>
using namespace std;
int main()
{
  double n, ans = 0.0;
  cin >> n;
  while (n--)
  {
    ans += 6.0;
    ans = 1.0 / ans;
  }
  printf("%.10lf\n", ans+3);
  return 0;
}
