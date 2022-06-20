#include <bits/stdc++.h>
using namespace std;

// Optimized for best case O(n)
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(flag==0){
           break;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    bubbleSort(arr, 4);
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}