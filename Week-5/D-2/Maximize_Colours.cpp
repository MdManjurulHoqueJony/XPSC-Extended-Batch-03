#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z, ans = 0;
    cin >> x >> y >> z;
    if (x > 0)
    {
        ans++;
        x--;
    }
    if (y > 0)
    {
        ans++;
        y--;
    }
    if (z > 0)
    {
        ans++;
        z--;
    }
    vector<int> a(3);
    a[0] = x;
    a[1] = y;
    a[2] = z;
    sort(a.begin(), a.end(), greater<int>());
    if (a[0] > 0 && a[1] > 0)
    {
        ans++;
        a[0]--;
        a[1]--;
    }
    if (a[0] > 0 && a[2] > 0)
    {
        ans++;
        a[0]--;
        a[2]--;
    }
    if (a[1] > 0 && a[2] > 0)
    {
        ans++;
        a[1]--;
        a[2]--;
    }
    cout << ans;
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