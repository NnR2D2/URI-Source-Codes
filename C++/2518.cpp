#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int n, h, c, l;
  double o;
  while (cin >> n)
  {

    cin >> h >> c >> l;
    o = n*sqrt(pow(h, 2) + pow(c, 2));
    cout<<fixed<<setprecision(4)<<( (o * l) / 10000)<<endl;
  }
  return 0;
}
