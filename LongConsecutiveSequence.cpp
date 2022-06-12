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

    set<int> s;
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(a[i] - 1) == s.end())
        {
            int c = 1;
            while (s.find(a[i] + c) != s.end())
            {
                c++;
            }
            res = max(res, c);
        }
    }
    cout << res;
    /*
    sort(a, a + n);

    int pd = a[1] - a[0];
    int ans = 1;
    int result = 0;
    int j = 1;

    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            ans++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            ans = 1;
        }
        result = max(ans, result);
        j++;
    }
    cout << result;*/

    return 0;
}