#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    int value = 0;
    char privious = 0;

    for (int i = 0; i < s.size(); i++)
    {

        char ch = s[i];
        switch (ch)
        {
        case 'I':
            value += 1;
            privious = 'I';
            break;
        case 'V':
            value += 5;
            if (privious == 'I')
            {
                value -= 2;
            }
            break;
        case 'X':
            value += 10;
            if (privious == 'I')
            {
                value -= 2;
            }
            privious = 'X';
            break;
        case 'L':
            value += 50;
            if (privious == 'X')
            {
                value -= 20;
            }

            break;
        case 'C':
            value += 100;
            if (privious == 'X')
            {
                value -= 20;
            }
            privious = 'C';
            break;
        case 'D':
            value += 500;
            if (privious == 'C')
            {
                value -= 200;
            }
            break;
        case 'M':
            value += 1000;
            if (privious == 'C')
            {
                value -= 200;
            }
            break;

        default:
            break;
        }
    }
    return value;
}

int main()
{
    string s = "MCMXCIV";
    cout << romanToInt(s) << endl;
    return 0;
}