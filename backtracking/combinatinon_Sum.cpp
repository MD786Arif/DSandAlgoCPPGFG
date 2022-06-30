#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &candidates, int target, vector<vector<int>> &output,
           vector<int> &temp, int index)
{
    // base case
    if (target == 0)
    {
        // ans store
        output.push_back(temp);
        return;
    }

    if (target < 0 || index >= candidates.size())
        return;

    for (int i = index; i < candidates.size(); i++)
    {

        // special condition
        if (i > index && candidates[i] == candidates[i - 1])
            continue;

        if (candidates[i] > target)
            break;

        temp.push_back(candidates[i]);
        solve(candidates, target - candidates[i], output, temp, i + 1);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());

    vector<vector<int>> output;
    vector<int> temp;

    solve(candidates, target, output, temp, 0);
    return output;
}
int main()
{

    vector<int> candiadates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum2(candiadates, target);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}