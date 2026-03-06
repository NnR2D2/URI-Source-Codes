#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int n, m;
  cin >> n >> m;
  cout<<(m*n)+((m-1)*(n-1))<<endl;
  cout<<2*(m-1)+2*(n-1)<<endl;
  return 0;
}
