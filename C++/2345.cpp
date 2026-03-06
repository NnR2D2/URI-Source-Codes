#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c, d, x, y, z;
  cin >> a >> b >> c >> d;
  x=abs((a+b)-(c+d));
  y=abs((a+c)-(b+d));
  z=abs((a+d)-(b+c));
  cout<<min(x,min(y,z))<<endl;

  return 0;
}
