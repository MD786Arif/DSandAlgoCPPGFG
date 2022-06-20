#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> vect;
    int arr[] = {4, 3, 2, 1};
    for (int i = 0; i < 4; i++)
    {
        vect.push_back(make_pair(arr[i], i));
    }

    sort(vect.begin(), vect.end());
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }
    return 0;
}