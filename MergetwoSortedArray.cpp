
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a1[] = {10, 27, 38, 43, 82};
    int a2[] = {3, 9};

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
    for (int i = 0; i < l; i++)
    {
        cout << a3[i] << " ";
    }

    return 0;
}


/*
int nextGap(int gap)
{
    if (gap <= 1)
    {
        return 0;
    }
    return (gap / 2) + (gap % 2);
}
int merge(int *a1, int *a2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
    {
        for (i = 0; i + gap < n; i++)
        {
            if (a1[i] > a1[i + gap])
                swap(a1[i], a1[i + gap]);
        }
        for (int j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
        {
            if (a1[i] > a2[j])
                swap(a1[i], a2[j]);
        }
        if (j < m)
        {
            for (j = 0; j + gap < m; j++)
            {
                if (a2[j] > a2[j + gap])
                    swap(a2[j], a2[j + gap]);
            }
        }
    }
}
int main()
{
    int a1[] = {10, 27, 38, 43, 82};
    int a2[] = {3, 9};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);

    merge(a1, a2, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    cout << "second" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }
    return 0;
}*/