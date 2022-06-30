#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int st, int end, int target)
{
    end = end - 1;
    if (st <= end)
    {

        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        if (target > arr[mid])
        {
            return binarySearch(arr, mid + 1, end, target);
        }
        else
        {

            return binarySearch(arr, st, mid - 1, target);
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 0, 5, 3) << endl;

    return 0;
}