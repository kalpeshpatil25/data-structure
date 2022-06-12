#include <iostream>
using namespace std;
int jumpend(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (arr[0] == 0)
    {
        return -1;
    }
    int j = 1, st = arr[0], maxR = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        maxR = max(maxR, i + arr[i]);
        st--;
        if (st == 0)
        {
            if (i >= maxR)
            {
                return -1;
            }
            j++;
            st = maxR - i;
        }
    }
    return j;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << jumpend(arr, n) << endl;
    }
    return 0;
}