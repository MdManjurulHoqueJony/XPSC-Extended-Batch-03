#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n & 1)
    {
        cout << "NO";
        return;
    }
    sort(a.begin(), a.end());
    for (int i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        v.push_back(a[i]);
        v.push_back(a[j]);
    }
    v.push_back(v[0]);
    v.push_back(v[1]);
    bool ans = true;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            continue;
        }
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            continue;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
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
        cout << '\n';
    }
    return 0;
}