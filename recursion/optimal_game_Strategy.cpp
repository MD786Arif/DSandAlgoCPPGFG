#include <bits/stdc++.h>
using namespace std;

int optimalGame(int arr[], int i, int j)
{
    int ans = 0;
    if (i > j)
    {
        return 0;
    }

    int choice1 = arr[i] + min(optimalGame(arr, i + 2, j), optimalGame(arr, i + 1, j - 1));
    int choice2 = arr[j] + min(optimalGame(arr, i + 1, j - 1), optimalGame(arr, i, j - 2));

    ans = max(choice1, choice2);
    return ans;
}

int main()
{
    int arr[] = {20, 30, 2, 2, 2, 10};
    int i = 0;
    int j = 5;
    cout << "Ans is " << optimalGame(arr, i, j) << endl;
    return 0;
}