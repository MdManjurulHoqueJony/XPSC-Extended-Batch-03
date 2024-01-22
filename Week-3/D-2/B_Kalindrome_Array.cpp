#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<int> v, int x)
{
    int n = v.size(), i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] == x)
        {
            i++;
        }
        else if (v[j] == x)
        {
            j--;
        }
        else if (v[i] != v[j])
        {
            return 0;
        }
        else
        {
            i++, j--;
        }
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = 1;
    for (int i = 0; i < n - 1 - i; ++i)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = checkPalindrome(a, a[i]) or checkPalindrome(a, a[n - 1 - i]);
            break;
        }
    }
    if (flag)
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