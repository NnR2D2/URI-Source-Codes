#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

    char s[30];
    int n;
    while ((scanf("%s", &s)) != EOF)
    {
        cin >> n;
        while (n--)
        {
            int j;
            cin >> j;
            cout << s[j - 1];
        }
        cout << endl;
    }
    return 0;
}
