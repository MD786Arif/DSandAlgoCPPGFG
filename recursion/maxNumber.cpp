#include <bits/stdc++.h>
using namespace std;

int maxNum(int arr[], int n, int i)
{
    int ans = INT_MIN;
    if (i < n)
    {
        ans = max(ans, arr[i]);
    }
    else if (i > n)
    {
        return ans;
    }
    return max(ans, maxNum(arr, n, i += 1));
}

int main()
{
    int arr[4] = {1, 10, 3, 4};
    cout << maxNum(arr, 4, 0) << endl;
    return 0;
}