#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

int t;
cin>>t;
cin.ignore();
while(t--)
{
  string str;
  getline(cin,str);
  int n=str.length();
  int d=n/2;
  for(int i=d-1;i>=0;i--)
  {
    cout<<str[i];
  }
  for(int i=n-1;i>=d;i--)
  {
    cout<<str[i];
  }
  cout<<endl;
}
 return 0;
}
