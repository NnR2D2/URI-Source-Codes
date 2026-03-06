#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int i, x,j=0;
  int arr[1000];
  cin >> x;
  fl(1000){
    cout<<"N["<<i<<"] = "<<j<<'\n';
    j++;
    if (j==x)
      j = 0;
  }
  

  return 0;
}
