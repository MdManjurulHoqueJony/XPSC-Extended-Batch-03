#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string name = "vika";
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == name[k] && k < 4)
            {
                k++;
                break;
            }
        }
    }
    if (k == 4)
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
        cout << '\n';
    }
    return 0;
}