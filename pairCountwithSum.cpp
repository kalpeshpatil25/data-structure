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
    cout << "enter k ";
    cin >> k;
    int count = 0;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x = k - a[i];

        if (m[x] == 0)
        {
            m[a[i]]++;
        }
        else
        {
            count += m[x];
            m[a[i]]++;
        }
    }
    cout << count;
    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                count++;
            }
        }
    }*/
    //cout << count;
    return 0;
}