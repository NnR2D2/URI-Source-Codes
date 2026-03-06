#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int t, n;
  while(cin>>t>>n&&t){
    int pts = 3 * n;
    string s;
    int aa;
    fl(t){
      cin>>s>>aa;
      pts -= aa;
    }
    cout<<pts<<endl;
  }

  return 0;
}
