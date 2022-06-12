#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxpro = 0;
    int minprice = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minprice = min(minprice, a[i]);
        maxpro = max(maxpro, a[i] - minprice);
    }
    cout << maxpro;
    return 0;
}