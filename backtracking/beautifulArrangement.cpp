#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int count = 0;
    void solve(vector<int> &nums, int index)
    {

        if (index >= nums.size())
        {
            count++;
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {

            int condition1 = nums[i] % (index + 1);
            int condition2 = (index + 1) % (nums[i]);
            if (condition1 == 0 || condition2 == 0)
            {
                swap(nums[i], nums[index]);
                solve(nums, index + 1);
                swap(nums[i], nums[index]);
            }
        }
    }

    int countArrangement(int n)
    {
        vector<int> nums;
        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }
        int index = 0;

        solve(nums, index);

        return count;
    }
};

int main()
{
    solution s1;
    cout << s1.countArrangement(5) << endl;

    return 0;
}