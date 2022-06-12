#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, ct = 0;
    cin >> n;
    int a[n];
    int profit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  
    cin >> k;
/*
    int   ans = 0, minno = INT_MAX;
    cin >> k;
    int le = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
        if (ans > k)
        {
            minno = min(minno, i - le + 1);

            ans -= arr[le];

            ans -= arr[i];

            le++;

            i--;
        }
        
    }
    cout<<;
    */
    int good = 0;
    int bad = 0;
    int mi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
            good++;
    }
    for (int i = 0; i < good; i++)
    {
        if (a[i] > k)
            bad++;
    }

    int i = 0;
    int j = good - 1;
    while (j < n)
    {
        mi = min(mi, bad);
        j++;
        if (j < n and a[j] > k)
            bad++;
        if (a[i] > k)
            bad--;
        i++;
    }
    if (mi == INT_MAX)
        cout << "0";
    else
        cout << mi;
    return 0;
}