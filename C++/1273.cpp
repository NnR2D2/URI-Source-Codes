#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
    int n,flag=0;
    while (cin >> n && n)
    {
        int x = 0;
        if (flag==1)cout<<endl;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i].length() > x)
                x = s[i].length();
        }
        for (int i = 0; i < n; i++)
        {
            int g = s[i].length();
            for (int j = 0; j < x - g; j++)
                cout << " ";

            cout << s[i] << endl;
        }
        flag = 1;
    }
    return 0;
}

