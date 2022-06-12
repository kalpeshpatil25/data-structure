#include <iostream>
using namespace std;
int linearsearch(int linear[], int n, int key)
{
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (key == linear[i])
        {
            cout << i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"not found";
        return 0;
    }
    return -1;
}
int main()
{
    int n, key;
    cin >> n;
    int linear[n];

    for (int i = 0; i < n; i++)
    {
        cin >> linear[i];
    }
    cout << "Enter a key" << endl;
    cin >> key;
    cout << endl;
    linearsearch(linear, n, key);
    return 0;
}