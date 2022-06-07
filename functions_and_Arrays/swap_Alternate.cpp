#include <bits/stdc++.h>
using namespace std;

void swap_alternate(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap_alternate(arr, n);
    cout << "Your alternatively swapped array is given below " << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}