#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    int i = 0;
    int j = nums.size() - 1;
    int ans = 0;
    for (int i = 0; i <= j; i++)
    {
        for (int k = i + 1; k <= j; k++)
        {
            if (nums[i] == nums[k])
            {
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    cout << numIdenticalPairs(nums) << endl;

    return 0;
}