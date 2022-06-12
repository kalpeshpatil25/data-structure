#include <iostream>
using namespace std;
int binarysearch(int binary[], int n, int key)
{
    int str = 0, ends = n, mid;
    while (str <= ends)
    {
        cout << "mid is= " << binary[mid];
        mid = (str + ends) / 2;
        if (key == binary[mid])
        {
            return mid;
        }
        else if (binary[mid] > key)
        {
            ends = mid - 1;
        }
        else
        {
            str = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cin >> n;
    int binary[n];

    for (int i = 0; i < n; i++)
    {
        cin >> binary[i];
    }
    cout << "Enter a key \t";
    cin >> key;

    cout << binarysearch(binary, n, key);
    return 0;
}