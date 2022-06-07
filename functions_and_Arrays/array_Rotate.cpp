#include <bits/stdc++.h>
using namespace std;

void rotate_By(int arr[], int n, int r)
{

    int j = 0;
    while (j < r)
    {
        int i = 0;
        int temp = arr[0];
        for (i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[i - 1] = temp;
        j++;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotate_By(arr, 5, 3);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout<<"\n"<<endl;

    return 0;
}