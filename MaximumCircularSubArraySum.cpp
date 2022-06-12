#include <iostream>
#include <climits>
using namespace std;
int kidane(int arr[], int n)
{
    int maxno = INT_MIN;
    int cursum = 0;
    for (int i = 0; i < n; i++)
    {
        cursum += arr[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        maxno = max(maxno, cursum);
    }
    return maxno;
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
    int wrapsum;
    int nonwapsum;
    int tatalsum = 0;
    nonwapsum = kidane(arr, n);
    for (int i = 0; i < n; i++)
    {
        tatalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = tatalsum + kidane(arr, n); //sum=totalsum - -kidane
    cout << max(wrapsum, nonwapsum);
    return 0;
}