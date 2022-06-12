#include <iostream>
using namespace std;

int main()
{
    int a1[] = {10, 15, 20, 30, 50};
    int a2[] = {4, 10, 11, 20, 50};
    int a3[] = {10, 20, 50};
    int n1 = sizeof(a1) / sizeof(int);
    int n2 = sizeof(a2) / sizeof(int);
    int n3 = sizeof(a3) / sizeof(int);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {

        if (a1[i] == a2[j] && a2[j] == a3[k])
        {
            cout << a3[k] << " ";
            i++;
            j++;
            k++;
        }
        else if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         for (int k = 0; k < n3; k++)
    //         {
    //             if (a1[i] == a2[j] && a2[j] == a3[k])
    //             {
    //                 cout << a3[k] << " ";
    //             }
    //         }
    //     }
    // }

    return 0;
}