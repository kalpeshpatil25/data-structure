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

    int temp;
    int iteration = 0;
    for (int i = 0; i < n - 1; i++) //5-1=4     = 0 to 4
    {
        iteration++;
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
        for (int j = i + 1; j < n; j++) //
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    //for (int i = 0; i < n; i++)
    //{
    //   cout << array[i] << " ";
    //}
    cout << "iteration is= " << iteration;
    cout << endl;

    return 0;
}