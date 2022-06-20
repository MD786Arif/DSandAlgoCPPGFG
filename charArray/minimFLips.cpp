#include <bits/stdc++.h>
using namespace std;

char flip(char expected)
{
    if (expected == '0')
    {
        return '1';
    }
    else
    {
        return '0';
    }
}

int getNumberFlips(string s, char expected)
{
    int countFLips = 0;

    for (long i = 0; i < s.length(); i++)
    {
        if (s[i] != expected)
        {
            countFLips++;
        }

        expected = flip(expected);
    }
    return countFLips;
}

int main()
{
    string s = "0001010111";

    int n1 = getNumberFlips(s, '0');
    int n2 = getNumberFlips(s, '1');

    return 0;
}