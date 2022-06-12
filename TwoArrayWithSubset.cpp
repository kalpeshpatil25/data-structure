#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int flag = 1;
    for (int i = 0; i < m; i++)
    {
        if (mp[b[i]] <= 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "yes";
    else
        cout << "no";
    /*
        int c=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a1[i] == a2[j])
            {
                c++;
            }
        }
    }
    if (c == m)
    {
        cout << "yes";
    }
    else
        cout << "no";
        */

    return 0;
}