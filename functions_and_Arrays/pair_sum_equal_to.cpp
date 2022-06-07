#include <bits/stdc++.h>
using namespace std;
int number_Of_Pairs(int arr[], int n, int value)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            if ((arr[i] + arr[j]) == value)
            {
                count++;
            }
        }
    }

    return count;
}

// Optimized

int number_Of_Pairs1(int arr[], int n, int value)
{

    int i = 0;
    int j = n - 1;
    int count = 0;
    sort(arr, arr + n);
    while (i != j)
    {
        int sum = arr[i] + arr[j];
        if (sum == value)
        {
            count++;
            j--;
        }
        if (sum > value)
        {
            j--;
        }

        if (sum < value)
        {
            i++;
        }
    }

    return count;
}

int main()
{
    // int n, val;
    // cout << "Enter the size of the array " << endl;
    // cin >> n;
    // int arr[n];

    // cout << "Enter the elements of the array " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "Enter the value for which you want to find the number of pairs " << endl;
    // cin >> val;
    int n = 5;
    int arr[n] = {3,2,6,1,5};
    int val = 7;

    cout << "The number of pairs are " << number_Of_Pairs(arr, n, val) << endl;
    return 0;
}