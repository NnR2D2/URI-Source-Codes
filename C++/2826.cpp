#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

    char str1[30], str2[30];
    scanf("%s %s", str1, str2);
    int r = strcmp(str1, str2);
    if (r > 0)
        cout << str2 << endl
             << str1 << endl;
    else
        cout << str1 << endl
             << str2 << endl;
    return 0;
}
