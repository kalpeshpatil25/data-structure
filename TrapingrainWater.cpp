#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    int profit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    } /*
    int lo = 0;
    int hi = n - 1;
    int left_max = 0;
    int right_max = 0;
    int ans = 0;
    while (lo <= hi)
    {
        if (a[lo] < a[hi])
        {
            if (a[lo] > mi)
            {
                mi = a[lo];
            }
            else
            {
                ans = ans + (mi - a[lo]);
            }
            lo++;
        }
        else
        {
            if (a[hi] > ma)
            {
                ma = a[hi];
            }
            else
            {
                ans = ans + (ma - a[hi]);
            }
            hi--;
        }
    }
    cout << ans;
    */
    int l[n], r[n];
    int ma=0, mi=INT_MAX;
    ma = l[0] = a[0];
    mi = r[n - 1] = a[n - 1];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > ma)
            ma = a[i];
        l[i] = ma;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > mi)
            mi = a[i];
        r[i] = mi;
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += min(l[i], r[i]) - a[i];
    }
    cout << s;

    return 0;
}