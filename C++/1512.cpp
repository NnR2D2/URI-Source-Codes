#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c;
  while(cin>>a>>b>>c&&a&&b&&c){
    int lcm = (c*b)/__gcd(b,c);
    int d = (a / b) + (a / c) - (a / lcm);
    printf("%d\n", d);
  }

  return 0;
}
