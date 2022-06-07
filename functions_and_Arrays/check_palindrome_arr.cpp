#include <bits/stdc++.h>
using namespace std;

bool check_Palindrome_Arr(int arr[], int n)
{

    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[j--])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << check_Palindrome_Arr(arr, n) << endl;

    return 0;
}