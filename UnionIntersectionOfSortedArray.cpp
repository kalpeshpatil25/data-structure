#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    cout << "a[i]";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "b[j]";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else if (a[i] < b[j])
            cout << b[j++] << " ";
        else
            cout << b[j++];
        i++;
    }
    while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";
    return 0;
}