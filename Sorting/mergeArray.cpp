#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2)
{
    int l1 = arr1.size();
    int l2 = arr2.size();
    vector<int> finalArr;

    int k = 0;
    int m = 0;

    while (k < l1 && m < l2)
    {
        if (arr1[k] < arr2[m])
        {
            finalArr.push_back(arr1[k]);
            k++;
        }
        else
        {
            finalArr.push_back(arr2[m]);
            m++;
        }
    }

    while (k < l1)
    {
        finalArr.push_back(arr1[k]);
        k++;
    }
    while (m < l2)
    {
        finalArr.push_back(arr2[m]);
        m++;
    }
    return finalArr;
}
int main()
{
    vector<int> arr1 = {3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6};
    vector<int> result = merge(arr1, arr2);
    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}