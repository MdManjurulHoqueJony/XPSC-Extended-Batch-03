#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s, sum = 0, count = 0, i = 0, j = 0;
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
            sum -= a[i];
            i++;
            count += (n - j);
        }
        j++;
    }
    cout << count;
    return 0;
}