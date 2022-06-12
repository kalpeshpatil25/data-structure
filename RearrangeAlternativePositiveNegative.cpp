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

    int i = -1, temp = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] < 0)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int pos = i + 1, neg = 0;

    while (pos < n && neg < pos && a[neg] < 0)
    {
        temp = a[neg];
        a[neg] = a[pos];
        a[pos] = temp;
        pos++;
        neg = neg + 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
/*
    
    int i = 0;
    int j = n - 1;
    while (i <= j) //2=i    3   -4  -1      6   -9 =j
    {
        if (a[i] < 0 && a[j] > 0) //2    3       6 =j   -1=i     -4      -9
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] > 0 && a[j] < 0)
        {
            i++;
            j--;
        }
        else if (a[i] > 0)
        {
            i++;
        }
        else if (a[j] < 0)
        {
            j--;
        }
    }

    cout << endl;
    if (i == n or i == 0) //if all negtive i=0  and i=0 all positive
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    }
    else //-1        3       -4      2       -9      6
    {
        int k = 0;
        while (k < n and i < n)
        {
            swap(a[k], a[i]);
            k = k + 2;
            i++;
        }
        for (int m = 0; m < n; m++)
            cout << a[m] << " ";
        cout << endl;
    }*/
    return 0;
}