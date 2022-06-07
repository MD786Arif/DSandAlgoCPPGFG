#include <bits/stdc++.h>
using namespace std;
void negative_aside(int arr[], int n)
{
    int temp[n];
    int k = 0;
    int l = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[k++] = arr[i];
        }
        else
        {
            temp[l--] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[5] = {-1, 34, -5, 9, -94};
    negative_aside(arr, 5);
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}