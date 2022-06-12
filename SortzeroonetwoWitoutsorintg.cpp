
#include <iostream>
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
    int st = 0;
    int ed = n - 1;
    int md = 0;
    while (md <= ed)
    {
        
        if (arr[md] == 0)
        {
            swap(arr[st], arr[md]);
            md++;
            st++;
        }
        if (arr[md] == 1)
        {
            md++;
        }
        if (arr[md] == 2 )
        {
            swap(arr[md], arr[ed]);
            md++;
            ed--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}