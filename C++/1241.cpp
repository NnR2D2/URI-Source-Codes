#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (str1.length() < str2.length())
            cout << "nao encaixa" << endl;
        else
        {
            int r = (str1.length() - str2.length());
            string str = str1.substr(r);
            if (str == str2)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
    }
    return 0;
}
