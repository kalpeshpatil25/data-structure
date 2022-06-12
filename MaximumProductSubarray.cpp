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
    if (n == 0)
    {
        cout << "-1";
    }
    int negative = 1;
    int positive = 1;
    int result = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive = positive * a[i];
            negative = min(negative * a[i], 1);
        }
        else if (a[i] == 0)
        {
            positive = 1;
            negative = 1;
        }
        else
        {
            int temp = positive;
            positive = max(1, a[i] * negative);
            negative = temp * a[i];
        }
        result = max(positive, result);
    }
    cout << result;
    return 0;
}