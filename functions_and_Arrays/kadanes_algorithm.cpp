#include <bits/stdc++.h>
using namespace std;
// Kadanes algorithm or we can say that max sub array sum
// Brute force algo
int maxSubarraySum(int arr[], int n)
{
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += arr[j];
        }
        Max = max(Max, sum);
    }

    return Max;
}

// optimized

int maxSubarrSum(int arr[], int n)
{

    int maxSF = INT_MIN;
    int maxEH = 0;
    for (int i = 0; i < n; i++)
    {
        // Include the current element

        maxEH += arr[i];
        // if(maxSF<maxEH){
        //     maxSF = maxEH;
        // }
        maxSF = max(maxSF, maxEH);

        // If max end here is < 0 then dont take it and assign 0

        // if(maxEH<0){
        //     maxEH = 0;
        // }
        maxEH = max(maxEH, 0);
    }

    return maxSF;
}

int main()
{
    // kadens algo
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << maxSubarrSum(arr, 8) << endl;

    return 0;
}