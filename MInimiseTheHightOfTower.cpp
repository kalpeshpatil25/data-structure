#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxno = max(maxno, a[i]);
        minno = min(minno, a[i]);
    }
    int mid = (maxno + minno) / 2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mid)
        {
            a[i] = a[i] + k;
        }
        else
        {
            a[i] = a[i] - k;
        }
    }
    int minno1 = INT_MAX;
    int maxno1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        minno1 = min(minno1, a[i]);
        maxno1 = max(maxno1, a[i]);
    }
    int fnl = maxno - minno;
    int fnl1 = maxno1 - minno1;
    cout << min(fnl, fnl1);
    return 0;
}