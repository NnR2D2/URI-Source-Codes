#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int row, col, i, j,posi,posj,cnt=0;
  cin >> row >> col;
  int arr[row][col];
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (arr[i][j] ==42&&arr[i-1][j-1]==7&&arr[i][j-1]==7&&arr[i+1][j-1]==7&&arr[i-1][j]==7&&arr[i+1
      {
        posi = i + 1;
        posj = j + 1;
        cnt = 1;
        break;
      }
    }
  }
  if(cnt==1)
    cout << posi << " " << posj << endl;
  else  cout << 0<< " " << 0 << endl;
  
  return 0;
}
