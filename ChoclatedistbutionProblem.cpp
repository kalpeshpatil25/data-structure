#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n;
    int a[n];
    long min = INT_MAX;
    int profit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "ente k ";
    cin >> k;
    sort(a, a + n);

    int d;

    for (int i = 0; i + k - 1 < n; i++)
    {
        d = a[i + k - 1] - a[i];
        if (d < min)
        {
            min = d;
        }
    }
    cout << min;
    /*
    for (int i = 0; i <= (n - k); i++)
    {
        if ((a[k - 1 + i] - a[i]) < min)
            min = a[k - 1 + i] - a[i];
    }
    cout << min; //2 for loop find subarry min and print min of all subarray
*/
    return 0;
}