#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int main()
{
    int arr[] = {3,1};
    // Pivot is the smallest element in the rotated sorted array
    cout << pivot(arr, 2) << endl;
    return 0;
}