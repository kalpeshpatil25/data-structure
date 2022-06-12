#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter sum";
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n;
        while (j < k)
        {
            if (a[i] + a[j] + a[k] == sum)
            {
                cout << a[i] << a[j] << a[k];
                cout << endl;
                i++;
                j++;
                k--;
            }
            else if (a[i] + a[j] + a[k] < sum)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    /*
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == sum)
                {
                    cout << a[i] << a[j] << a[k];
                    cout << endl;
                    count++;
                }
            }
        }
    }
    cout << endl;
    cout << count;
    */
    return 0;
}