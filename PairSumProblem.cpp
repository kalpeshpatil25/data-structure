#include <iostream>
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

    int k;
    cout << "Enter k";
    cin >> k;
    if (n == 1)
    {
        cout << "1";
    }
    int st = 0;
    int ed = n - 1;
    while (st < ed)
    {
        if (a[st] + a[ed] == k)
        {
            cout << st << " " << ed;
            return 0;
        }
        else if (a[st] + a[ed] > k)
        {
            ed--;
        }
        else
        {
            st++;
        }
    }
    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }
    */
    return 0;
}