#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    int profit[n];
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        price[i] = 0;
    }

    int max_price = a[n - 1];/*
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > max_price)
            max_price = a[i];
        profit[i] = max(profit[i + 1], max_price - a[i]);
    }
    int min_price = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min_price)
        {
            min_price = a[i];
            profit[i] = max(profit[i - 1], profit[i] + (a[i] - min_price));
        }
    }
    int result = profit[n - 1];
    cout << result;*/

    int buy1, buy2, profit1, profit2;
    buy1 = buy2 = INT_MAX;
    profit1 = profit2 = 0;
    for (int i = 0; i < n; i++)
    {
        buy1 = min(buy1, price[i]); //stock to buy 0 to i-1;

        buy2 = min(buy2, price[i] - profit1); //from selling the first stock

        profit1 = max(profit1, price[i] - buy1); //profit we make from 0 to i-1

        profit2 = max(profit2, price[i] - buy2); // profit we make from 0 to i - 1
    }
    cout << profit2;
    return 0;
}