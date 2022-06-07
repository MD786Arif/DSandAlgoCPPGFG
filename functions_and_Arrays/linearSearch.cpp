#include <bits/stdc++.h>
using namespace std;
void search(int arr[], int n, int target)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            cout << "Element Found at " << i + 1 << endl;
            break;
        }
    }
    if (!flag)
    {
        cout << "Element not found" << endl;
    }
}
int main()
{
    int arr[] = {34, 89, 12, 0, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    search(arr, n, 4);
    return 0;
}