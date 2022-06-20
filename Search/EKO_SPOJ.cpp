#include <bits/stdc++.h>
using namespace std;
bool isPOssible(int arr[], int n, int mid, int target)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int difference = 0;

        if (arr[i] > mid)
        {
            difference = arr[i]-mid;
            sum += difference;
        }
    }
    if (sum >= target)
    {
        return true;
    }

    return false;
}

int getMaxHeightOfSaw(int arr[], int n, int target)
{
    sort(arr, arr + n);
    int s = 0;
    int e = arr[n - 1];
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPOssible(arr, n, mid, target))
        {
            ans = mid;
            // right part
            s = mid + 1;
        }
        else
        {
            // Left Part
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {4,42,40,26,46};
    int ans = getMaxHeightOfSaw(arr, 5, 20);
    cout << "The answer is " << ans << endl;

    return 0;
}