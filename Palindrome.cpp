#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int palindrome(int a[], int n)
{
    int temp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        temp = a[i];
        while (temp > 0)
        {
            int r = temp % 10;
            temp /= 10;
            ans = (ans * 10) + r;
        }
    }
    if (ans != temp)
        return 0;
    break;
    else return 1;
}
int main()
{
    int n, k, ct = 0, j;
    cin >> n;
    int a[n];
    int profit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << palindrome(a, n);
    return 0;
}