#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

    while (true)
    {
        int n, i, k, temp;
        cin >> n;
        if (n == 0)
            break;
        else
        {
            int arr[n];
            for (i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cin >> k;
            while (k != arr[k - 1])
            {
                k = arr[k - 1];
            }
            cout << k << endl;
        }
    }
    return 0;
}
