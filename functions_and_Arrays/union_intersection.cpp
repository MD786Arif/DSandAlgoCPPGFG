#include <bits/stdc++.h>
using namespace std;

void union_of_Arr(int A1[], int A2[], int n1, int n2)
{
    int arr[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 || j < n2)
    {
        if (A1[i] < A2[j])
        {
            arr[k] = A1[i];
            k++;
            i++;
        }
        if (A1[i] == A2[j])
        {
            arr[k++] = A1[i];
            i++;
            j++;
        }
        if (A1[i] > A2[j])
        {
            arr[k] = A2[j];
            k++;
            j++;
        }
    }
    if (i < n1)
    {
        arr[k++] = A1[i++];
    }
    if (j < n1)
    {
        arr[k++] = A2[j++];
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}

void intersection(int A1[], int A2[], int n1, int n2);

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[5] = {4, 3, 3, 8, 7};
    union_of_Arr(arr1, arr2, 4, 5);
    // intersection(arr1, arr2, 4, 5);

    return 0;
}

void intersection(int A1[], int A2[], int n1, int n2)
{
    vector<int> arr;
    int j = 0;
    for (j = 0; j < n1; j++)
    {
        int flag = 0;
        for (int k = 0; k < n2; k++)
        {
            if (A1[j] == A2[k])
            {
                if (flag == 0)
                {
                    arr.push_back(A1[j]);
                    flag++;
                }
            }
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}