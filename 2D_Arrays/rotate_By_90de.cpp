#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[3][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void reverse(int arr[3][3], int n)
{
    int startCol = 0;
    int endCol = n - 1;
    for (int i = 0; i < n; i++)
    {
        swap(arr[i][endCol], arr[i][startCol]);
    }
    startCol++;
    endCol--;
}
void rotate(int arr[3][3], int n)
{
    transpose(arr, n);
    reverse(arr, n);
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr,3);

    // Printing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}