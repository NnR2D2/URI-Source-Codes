#include <bits/stdc++.h>
using namespace std;
//Nitta Nando Roy(222-15-6336)
    int res, n_call;
int fib(int a)
{
    if (a == 0)
    {
        n_call++;
        return 0;
    }
    else if (a == 1)
    {
        n_call++;
        res++;
        return 1;
    }
    else
    {
        n_call++;
       
        return fib(a - 1) + fib(a - 2);
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        fib(x);
        cout << "fib(" << x << ") = " << n_call-1 << " calls = " << res << endl;
        n_call=0,res=0;
    }
    return 0;
}
