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
    cout << "enter k";
    cin >> k;

    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        while (a[i] == a[i + 1])
        {
            cnt++;
            i++;
        }
        if (cnt > (n / k))
        {
            cout << a[i] << " ";
        }
        i++;
    }

    return 0;
}