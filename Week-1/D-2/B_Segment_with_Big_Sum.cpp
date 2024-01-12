#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s, sum = 0, mn = __LONG_LONG_MAX__, i = 0, j = 0;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (j < n)
    {
        sum += a[j];
        while (sum >= s)
        {
            mn = min(mn, (j - i + 1));
            sum -= a[i];
            i++;
        }
        j++;
    }
    if (mn == __LONG_LONG_MAX__)
    {
        cout << -1;
    }
    else
    {
        cout << mn;
    }
    return 0;
}