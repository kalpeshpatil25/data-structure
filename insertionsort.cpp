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
    for (int i = 1; i < n; i++) //start cheking from 1 index because 0 index element is imagine it is sorted
    {
        int current = array[i]; //strore current a[i]value
        int j = i - 1;          //1-1=0   2-1=1  store to compare with current value

        while (array[j] > current && j >= 0) //j>current and j!=0
        {
            array[j + 1] = array[j]; // a[0+1]=a[0] a[1]=a[0] value place
            j--;                     //j-- untill j is less 0 this sorting continue
        }
        array[j + 1] = current; //j-- means j index is -1 then a[-1+1]=a[i]; a[0]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}