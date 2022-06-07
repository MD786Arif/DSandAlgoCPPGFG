#include <bits/stdc++.h>
using namespace std;

void max_and_min(int arr[], int n)
{
    int Max = INT_MIN;
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        Max = max(Max, arr[i]);
        Min = min(Min, arr[i]);
    }
    cout << "Your min element in the array is " << Min << endl;
    cout << "Your max element in the array is " << Max << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max_and_min(arr, n);

    return 0;
}