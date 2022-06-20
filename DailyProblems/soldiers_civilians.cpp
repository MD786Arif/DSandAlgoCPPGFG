#include <bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    int n = mat.size();
    int m = mat[0].size();

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }

        arr.push_back(make_pair(count, i));
    }

    sort(arr.begin(), arr.end());

    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        result.push_back(arr[i].second);
    }
    return result;
}

int main()
{

    vector<vector<int>> arr = {{1, 0, 0, 0}, {1, 1, 1, 1}, {1, 0, 0, 0}, {1, 0, 0, 0}};

    vector<int> arr1 = kWeakestRows(arr, 2);
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}