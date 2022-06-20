#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2)
{

    if (s1.find(s2) != string::npos)
    {
        return true;
    }

    return 0;
}
int main()
{
    string s1 = "babbar";
    string s2 = "abbam";
    cout << check(s1, s2) << endl;

    return 0;
}