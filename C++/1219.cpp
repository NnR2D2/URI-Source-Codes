#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  double a, b, c;
  while (cin >> a >> b >> c)
  {
    double cir, inc, s, area, r;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    r = (a * b * c) / (4 * area);
    cir=(M_PI*r*r)-area;
    inc = (M_PI * (area / s) * (area / s));

    area=area-inc;
   cout<<fixed<<setprecision(4)<<cir<<" "<<area<<" "<<inc<<endl;
  }
  return 0;
}
