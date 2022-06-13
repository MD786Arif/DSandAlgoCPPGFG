#include <bits/stdc++.h>
using namespace std;
void spiralMatrix(int arr[4][4], int n, int m)
{
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;
    int total = n * m;
    while (total--)
    {
        // startRow
        for (int i = startCol; i <= endCol; i++)
        {
            cout << arr[startRow][i] << "->";
        }
        startRow++;
        // EndCol
        for (int i = startRow; i <= endRow; i++)
        {
            cout << arr[i][endCol] << "->";
        }
        endCol--;
        // endRow
        for (int i = endCol; i >= startCol; i--)
        {
            cout << arr[endRow][i] << "->";
        }
        endRow--;
        // startCol
        for (int i = endRow; i >= startRow; i--)
        {
            cout << arr[i][startCol] << "->";
        }
        startCol++;
    }
    cout<<endl;
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {12, 13, 14, 5}, {11, 16, 15, 6}, {10, 9, 8, 7}};
    cout<<endl;
    spiralMatrix(arr, 4, 4);

    return 0;
}