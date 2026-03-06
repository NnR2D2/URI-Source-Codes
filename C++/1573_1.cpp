#include <bits/stdc++.h>
using namespace std;
// Nitta Nando Roy(222-15-6336)
int main()
{

    int x, y, z, res;
    while (cin >> x >> y >> z && x && y && z)
    {
        res = cbrt(x * y * z);
        cout << res << endl;
    }
    return 0;
}
