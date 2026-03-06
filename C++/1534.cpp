#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int arr[n][n];
        int k = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j)
                    arr[i][j] = 1;
                    else
                    arr[i][j] = 3;
                    if(j==k)
                    arr[i][j] = 2;
            }
            k--;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                    cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

