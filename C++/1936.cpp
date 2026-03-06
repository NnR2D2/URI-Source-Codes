#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int x,cnt=0,i;
  int fac[] = {1, 2, 6, 24, 120, 720, 5040, 40320};
  cin >> x;
  for ( i = 7; i >=0;i--){
    if ((x/fac[i])>0){
      cnt=cnt+(x/fac[i]);
      x%=fac[i];
      
    }
  }
  cout<<cnt<<endl;
  return 0;
}
