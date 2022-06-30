#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Reference variable
    // int a = 6;
    // int &b = a;

    // cout << a << endl;
    // b++;
    // cout << b << endl;
    // delete &b;

    // Dyanamic memory allocation
    // int *p = new int;
    // *p = 89;
    // cout << *p << endl;
    // delete p;

    // int *arr = new int[7];
    // arr[0] = 1;
    // cout << arr[0] << endl;
    // delete[] arr;

    //   2d array allocation
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}