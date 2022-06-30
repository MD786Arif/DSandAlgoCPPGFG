#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> arr;
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i & 1 != 0)
        {
            arr.push_back(nums[n++]);
        }
        else
        {
            arr.push_back(nums[j++]);
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 3, 2, 1};
    vector<int> arr2 = shuffle(arr, 4);
    for (auto i : arr2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}