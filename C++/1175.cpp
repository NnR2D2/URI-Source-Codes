#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int i, x,j=0;
  int arr[20],urr[20];
  
  fl(20){
    cin>>arr[i];
  }
  for ( i = 19; i >=0; i--)
  {
    cout<<"N["<<j<<"] = "<<arr[i]<<'\n';
    j++;
  }
  

  return 0;
}
