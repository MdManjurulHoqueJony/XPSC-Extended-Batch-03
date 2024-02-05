#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (((a + b) / 2) > c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}