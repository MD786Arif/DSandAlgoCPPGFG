#include <bits/stdc++.h>
using namespace std;

int fixedPOint(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == mid)
        {
            return mid;
        }
        else if (mid < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
//   When the elementa are unique
    int arr[] = {-10, -5, 0, 3, 7};
    cout << (fixedPOint(arr, 5)) << endl;

    return 0;
}