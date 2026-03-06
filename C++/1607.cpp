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
  int cnt = 0,len;
  string s1, s2;
  cin >> s1 >> s2;
len=s1.length();
  for (int i = 0; i < len; i++)
  {
    if (s1[i] == s2[i])
      continue;
    else if (s1[i] > s2[i])
    {
      cnt+=26-(s1[i]-s2[i]);
    }
    else if (s1[i] < s2[i])
    {
      cnt += s2[i] - s1[i];      
    }
  }
  cout<<cnt<<endl;
}
 return 0;
}
