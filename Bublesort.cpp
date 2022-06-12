#include <iostream>
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

    int counter = 1, swap = 0;
    while (counter < n)                       // 1 to 4        n-1 iteration
    {                                         //  5-1=4 iterations
        for (int i = 0; i < n - counter; i++) //i<n-1 because counter is 0 4-0=4 next iteration will be 4-2=2 4-3=1 4-4=0
        {
            if (array[i + 1] < array[i]) //check right or wrong adjecent item if wrong then swap or incement i++
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                swap++;
            }
        }
        counter++;
    }
    cout << swap << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }
    cout << endl;
    return 0;
}