#include <bits/stdc++.h>
using namespace std;
int number_Of_Pairs(int arr[], int n, int value)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == value)
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ") = " << (arr[i] + arr[j] + arr[k]) << endl;
                    count++;
                }
            }
        }
    }

    return count;
}

int main()
{
    int n, val;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value for which you want to find the number of pairs " << endl;
    cin >> val;

    cout << "The number of pairs are " << number_Of_Pairs(arr, n, val) << endl;
    return 0;
}