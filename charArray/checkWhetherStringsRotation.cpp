#include <bits/stdc++.h>
using namespace std;

bool checkWhetherRotation(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return 0;
    }

    s1 = s1 + s1;
    if (s1.find(s2) != string::npos)
    {
        return true;
    }
    return false;
}

int main()
{

    return 0;
}