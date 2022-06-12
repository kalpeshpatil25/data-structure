#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int palandrome(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        int num = arr[i];
        while (num > 0)
        {
            int r = num % 10;
            ans = (ans * 10) + r;
            num /= 10;
        }
        if (ans != arr[i])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   cout<< palandrome(arr,n);

    return 0;
}