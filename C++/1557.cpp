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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = pow(2, (i + j));
            }
        }
        int r = floor(log10(arr[n - 1][n - 1]) + 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<setw(r)<<arr[i][j];
                if(j<n-1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

