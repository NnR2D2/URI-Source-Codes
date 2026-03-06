#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c, d, e, f;
  while(cin>>a>>b>>c>>d>>e>>f)
  {
    int sum = 0;
    if(d>a)
    sum+=d-a;
    if(e>b)
    sum+=e-b;
    if(f>c)
    sum+=f-c;
    cout<<sum<<endl;
  }
  return 0;
}
