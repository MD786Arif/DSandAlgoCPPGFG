#include <bits/stdc++.h>
using namespace std;

bool search(int arr[][3], int rows, int cols,int target)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]==target){
                return true;
            }
        }
    
    }
    return false;
}

int main()
{

    int arr[3][3]{{1, 2, 3}, {4, 5}, {8, 3, 4}};
    cout<<boolalpha<<(search(arr, 3, 3,8))<<endl;
    return 0;
}