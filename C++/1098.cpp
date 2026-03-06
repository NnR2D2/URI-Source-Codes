#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  float i=0, j=1;
  while (i<2.1)
  {
    cout <<"I="<<i<<" J="<<j+i<<endl;
    cout <<"I="<<i<<" J="<<j+i+1<<endl;
    cout <<"I="<<i<<" J="<<j+i+2<<endl;
    i += .2;
  }

  return 0;
}
