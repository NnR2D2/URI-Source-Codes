#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int t;
  while(cin>>t&&t){
    string s;
    cin>>s;
    int cnt = 1;
    for(int i=0;i<s.length();i++){
    if(s[i]=='D'){
      cnt++;
      if(cnt>4)
        cnt = 1;
    }
    else if(s[i]=='E'){
      cnt--;
      if(cnt<1)
        cnt = 4;
    }
    }
    if(cnt==1)
      cout<<"N"<<endl;
    else if(cnt==2)
      cout<<"L"<<endl;
    else if(cnt==3)
      cout<<"S"<<endl;
    else if(cnt==4)
      cout<<"O"<<endl;
    }
        return 0;
}
