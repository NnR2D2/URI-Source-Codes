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
  string str;
  cin>>str;
  int n=str.length();
  int k;
  cin>>k;
fl(n)
{
  if(str[i]>='A' && str[i]<='Z')
  {
    str[i]=str[i]-k;
    if(str[i]<'A')
    {
      str[i]=str[i]+26;
    }
  }
}
cout<<str<<endl;
}
 return 0;
}
