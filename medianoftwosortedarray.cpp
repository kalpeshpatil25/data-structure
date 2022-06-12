#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a1[] = {3, 6, 9, 12, 15};
    int a2[] = {18, 21, 24, 27, 30};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);

    int l = m + n;
    int a3[l];

    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
        {
            a3[k++] = a2[j++];
        }
    }
    while (i < n)
    {
        a3[k++] = a1[i++];
    }
    while (j < m)
    {
        a3[k++] = a2[j++];
    }
    // for (int i = 0; i < l; i++)
    // {
    //     cout << a3[i] << " ";
    // }
    if (l % 2 == 0)
        cout << (a3[l / 2] + a3[l / 2 - 1]) / 2;
    else
        cout << a3[l / 2];

    return 0;
}