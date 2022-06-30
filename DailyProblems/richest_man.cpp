#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int cols = accounts[0].size();
    int rows = accounts.size();
    int ans = INT16_MIN;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += accounts[i][j];
        }
        ans = max(ans, sum);
    }

    return ans;
}

int main()
{
    vector<vector<int>> acounts = {{1, 2, 3}, {4, 5, 6}};
    cout << maximumWealth(acounts) << endl;

    return 0;
}