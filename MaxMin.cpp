#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
        /* if (array[i] > maxNo)
        {
            maxNo = array[i];
        }

        if (array[i] < minNo)
        {
            minNo = array[i];
        }*/
    }
    cout << "maximum number is= " << maxNo << endl;
    cout << "minimum number is= " << minNo;

    return 0;
}