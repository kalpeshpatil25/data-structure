#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int duplicate(int a[])
{
    int slow = a[0];
    int fast = a[0];
    do
    {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);
    fast = a[0];
    while (slow != fast)
    {
        slow = a[slow];
        fast = a[fast];
    }
    return slow;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    /*
    for (int i = 0; i < n; i++)
    {
        if (a[abs(a[i])] >= 0)
        {
            a[abs(a[i])] = -a[abs(a[i])];
        }
        else
        {
            cout << abs(a[i]);
        }
    }*/

    /*
    for (int i = 0; i < n; i++)
    {
        a[a[i] % n] = a[a[i] % n] + n;
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] / n > 1)
            cout << i << endl;
    }
*/
    cout << duplicate(a);

    /* sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << a[i] << " ";
        }
    }*/
    return 0;
}