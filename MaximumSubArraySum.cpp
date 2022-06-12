#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxno = INT_MIN;
    int currsun = 0;

    for (int i = 0; i < n; i++)
    {
        currsun += arr[i];
        if (currsun < 0)
        {
            currsun = 0;
        }
        maxno = max(maxno, currsun);
    }
    /*
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current += arr[j];
        }
        maxno = max(maxno, current);
    }*/

    /* int currentsum[n + 1];
    currentsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currentsum[i] = currentsum[i - 1] + arr[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currentsum[i] - currentsum[j];
            cout << "sum is =" << sum << endl;
            maxno = max(sum, maxno);
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << "cursum arry= " << currentsum[i] << " ";
    }*/
    cout << maxno;
    return 0;
}