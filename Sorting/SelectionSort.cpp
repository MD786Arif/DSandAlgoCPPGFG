#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {4, 3, 2, 1};
    selectionSort(arr, 4);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}