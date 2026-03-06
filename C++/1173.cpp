#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 1; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int i, x;
  cin >> x;
  int arr[10];
  arr[0] = x;
  cout<<"N[0] = "<<arr[0]<<endl;
  fl(10){
    arr[i] = arr[i - 1] * 2;
    cout << "N["<<i<<"] = " << arr[i] << endl;
  }

  return 0;
}
