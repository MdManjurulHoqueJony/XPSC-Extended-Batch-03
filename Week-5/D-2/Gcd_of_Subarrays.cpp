#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, s;
    cin >> n >> k;
    s = (n * (n + 1)) / 2;
    if (k < s)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << k - (s - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}