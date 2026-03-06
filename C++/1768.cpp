#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 1; j <= n; j++)
int main()
{

    int t, i, j;

    while (cin >> t)
    {
        for (i = 0; i < (t / 2) + 1; i++)
        {
            for (j = 0; j < (t / 2) - i; j++)
            {
                cout << " ";
            }
            for (j = 0; j < (2 * i) + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < (t / 2) - i; j++)
            {
                cout << " ";
            }
            for (j = 0; j < (2 * i) + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
