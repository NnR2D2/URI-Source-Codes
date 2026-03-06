#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b;
  cin>>a>>b;
  string str;
  fl(b){
    cin >> str;
    if (str == "fechou")
      a++;
    else if (str == "clicou")
      a--;
  }
  cout<<a<<endl;

  return 0;
}
