#include <bits/stdc++.h>
using namespace std;
void reverseArr(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
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

    reverseArr(arr, n);
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}