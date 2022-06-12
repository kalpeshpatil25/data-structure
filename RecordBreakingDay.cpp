#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n + 1]; //array is greater than n compare i+1
    array[n] = -1;    //a[i]>a[i+1]  and n take non negative

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
   
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > mx && array[i] > array[i + 1])
        {
            ans++;
        }
        mx = max(mx, array[i]);
    }
    cout << ans;

    return 0;
}