#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];

    // Count smaller values
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // find right place

    int pivotIndex = start + count;

    // swap
    swap(arr[pivotIndex], arr[start]);

    // Hnadle left and right
    // we want all less element to the left of pivot and large to right

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        //  already smaller elemnt  in left side

        while (arr[i] <= pivot)
        {
            i++;
        }
        //  already greater elemnt  in right side

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {

            swap(arr[i], arr[j]);

            i++;
            j--;
        }

    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // Base case

    if (start >= end)
    {
        return;
    }
    int pivotIndex = partition(arr, start, end);
    // Left part
    quickSort(arr, start, pivotIndex - 1);

    // Right part sort
    quickSort(arr, pivotIndex + 1, end);
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = 6;
    quickSort(arr, 0, size - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}