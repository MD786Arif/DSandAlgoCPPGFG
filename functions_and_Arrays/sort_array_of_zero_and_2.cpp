#include <bits/stdc++.h>
using namespace std;

void sort_arr(int arr[], int n)
{
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    int k = 0;
    while (zeros != 0)
    {
        arr[k++] = 0;
        zeros--;
    }
    while (ones != 0)
    {
        arr[k++] = 1;
        ones--;
    }
    while (twos != 0)
    {
        arr[k++] = 2;
        twos--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort_arr(arr, n);
    // sort(arr, arr + n);  // in built sort function
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}