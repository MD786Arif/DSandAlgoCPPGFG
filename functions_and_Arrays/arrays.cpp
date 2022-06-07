#include <bits/stdc++.h>
using namespace std;
// Contigous memory location
void printArr(int arr[], int n)
{
    arr[0] = 34;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    printArr(arr, 6);
    cout << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}