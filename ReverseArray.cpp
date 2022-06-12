#include <iostream>`
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
    int str = 0;
    int ed = n - 1;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[ed];
        arr[ed] = arr[str];
        arr[str] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}