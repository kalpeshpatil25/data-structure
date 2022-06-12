#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    int i = 0, j = 0;
    int mi = INT_MAX;
    int ans = 0;
    while (i <= j and j < n)
    {
        while (ans <= k and j < n)
        {
            ans += a[j++];
        }
        while (ans > k and i < j)
        {
            mi = min(mi, j - 1);
            ans -= a[i];
            i++;
        }
    }
    if (mi == INT_MAX)
        cout << "not present";
    else
    {
        cout << mi;
    }

    return 0;
}