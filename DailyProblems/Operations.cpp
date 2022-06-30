#include <bits/stdc++.h>
using namespace std;
int finalValueAfterOperations(vector<string> &operations)
{

    int X = 0;
    for (int i = 0; i < operations.size(); i++)
    {

        string st = operations[i];
        if (st == "++X" || st == "X++")
        {
            X = X + 1;
        }
        else if (st == "--X" || st == "X--")
        {
            X = X - 1;
        }
    }

    return X;
}
int main()
{
    vector<string> operations = {"--X","X++","X++"};
    cout << finalValueAfterOperations(operations) << endl;
    return 0;
}