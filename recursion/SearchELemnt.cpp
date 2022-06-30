#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int i, int n, int target)
{
    if (arr[i] == target && i < n)
    {
        return i;
    }
    else if (i > n)
    {
        return -1;
    }
    return searchElement(arr, i+=1, n, target);
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << searchElement(arr, 0, 4, 3) << endl;
    return 0;
}