#include <bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    string result;
    if (str1 + str2 != str2 + str1)
    {
        return "";
    }
    else
    {
        int hcf = __gcd(n1, n2);
        result = str1.substr(0, hcf);
    }

    return result;
}
int main()
{
    string str1 = "ABABAB";
    string str2 = "ABAB";

    // str1.pop_back();
    // cout << str1 << endl;
    cout << (__gcd(str1.size(), str2.size())) << endl;
    cout << (str1.substr(0, (__gcd(str1.length(), str2.length())))) << endl;
    // cout << gcdOfStrings("ABCABC", "ABC") << endl;

    return 0;
}