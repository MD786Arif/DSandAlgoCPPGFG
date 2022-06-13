#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int target)
{
    int startIn = 0;
    int endIn = n - 1;
    while (startIn <= endIn)
    {
        int mid = startIn + endIn;
        if (arr[mid] == target)
        {
            return true;
        }
        if (target < arr[mid])
        {
            endIn = mid - 1;
        }
        else
        {
            startIn = mid + 1;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {3, 5, 9, 10, 15};
    // By using stl
    int index = binary_search(arr, arr + 5, 34);
    int index1 = binarySearch(arr, 5, 9);
    cout << index1 << endl;

    return 0;
}