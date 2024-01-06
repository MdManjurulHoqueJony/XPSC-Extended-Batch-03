#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s,sum=0;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, mx = 0;
    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        mx = max(mx, (j - i + 1));
        j++;
    }
    cout << mx;
    return 0;
}