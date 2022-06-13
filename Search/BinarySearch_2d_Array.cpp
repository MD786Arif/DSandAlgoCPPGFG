#include <bits/stdc++.h>
using namespace std;
bool binarySearch_2d(int arr[3][3], int n, int m, int row, int target)
{
    int s1 = 0;
    int e1 = m - 1;
    while (s1 <= e1)
    {
        int mid = s1 + (e1 - s1) / 2;
        if (arr[row][mid] == target)
        {
            cout << row << " " << mid << endl;
            return true;
        }
        if (arr[row][mid] < target)
        {
            s1 = mid + 1;
        }
        else
        {
            e1 = mid - 1;
        }
    }
    return false;
}

bool Search(int arr[3][3], int n, int m, int target)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        // Check starting elemnt of row
        if (arr[mid][0] == target)
        {
            cout << mid << " " << 0 << " \n";
            return true;
        }
        if (arr[mid][m - 1] == target)
        {
            cout << mid << " " << m - 1 << " \n";
            return true;
        }

        if (target > arr[mid][0] && target < arr[mid][m - 1])
        {
            bool ans = binarySearch_2d(arr, n, m, mid, target);
            return ans;
        }

        // Check upper part

        if (target < arr[mid][0])

            e = mid - 1;

        // Check lower part
        if (target > arr[mid][m - 1])

            s = mid + 1;
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1, 5, 9},
                     {14, 20, 23},
                     {30, 34, 43}};
    cout << Search(arr, 3, 3, 23) << endl;

    return 0;
}