#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

int t;
cin>>t;
while(t--)
{
  string s1, s2;
  cin >> s1 >> s2;
  int x, y,i;
  x = s1.length();
  y = s2.length();
  for ( i = 0; i < min(x,y); i++)
  {
    cout << s1[i] << s2[i];
  }
  for ( i ; i < max(x,y); i++)
  {
    if(x>y)
      cout << s1[i];
    else
      cout << s2[i];
  }
  cout<<endl;
  
}
 return 0;
}
