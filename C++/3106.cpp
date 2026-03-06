#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int n,sum=0;
  cin >> n;
  int a[n];
  fl(n)
  {
    cin >> a[i];
    a[i] = a[i] - (a[i] % 3);
    sum+=a[i];
  }
  cout<<sum<<endl;
  return 0;
}
