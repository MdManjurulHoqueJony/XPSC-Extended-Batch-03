#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        if (d[i] % k == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
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
        cout << endl;
    }
    return 0;
}