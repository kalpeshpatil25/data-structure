#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//return inversion count of merge array
int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int int_count = 0;

    i = left; //left subarray
    j = mid;  //right subarray
    k = left; //index for resultant merged sunarray

    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else //if greater
        {
            temp[k++] = arr[j++];
            int_count = int_count + (mid - i);
        }
    }
    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
    return int_count;
}
int _mergesort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (left < right)
    {
        mid = (right + left) / 2;
        inv_count += _mergesort(arr, temp, left, mid);      //one split 0 to mid
        inv_count += _mergesort(arr, temp, mid + 1, right); //second from mid+1 to n

        inv_count += merge(arr, temp, left, mid + 1, right); //call merge function
    }
    return inv_count;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp[n];
    cout << _mergesort(arr, temp, 0, n - 1);
    //mergesort method

    /*
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                count++;
            }
        }
    }
    cout << count;*/
    return 0;
}