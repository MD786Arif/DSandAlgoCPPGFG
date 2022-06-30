#include <bits/stdc++.h>
using namespace std;

void solve(string tiles, string &output, set<string> &result, map<int, bool> flag)
{

    for (int i = 0; i < tiles.length(); i++)
    {

        if (flag[i] == 0)
        {

            output.push_back(tiles[i]);
            flag[i] = 1;
            result.insert(output);

            // recursive call
            solve(tiles, output, result, flag);
            output.pop_back();
            flag[i] = 0;
        }
    }
}

int numTilePossibilities(string tiles)
{
    string output = "";
    set<string> result;
    map<int, bool> flag;
    solve(tiles, output, result, flag);
    return result.size();
}
int main()
{
    cout << numTilePossibilities("AAB") << endl;

    return 0;
}