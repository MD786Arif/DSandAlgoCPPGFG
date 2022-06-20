#include <bits/stdc++.h>
using namespace std;

// brute force approach time Complexity (o(nlogn))
bool isAnagram(string s1, string s2)
{

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

// OPtimized Aprroch using frequency counts
bool isAnagram1(string s1, string s2)
{

    int arr[26] = {0};
    // Incrementing
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int index = ch - 'a';
        arr[index]++;
    }

    // Decrementing

    for (int i = 0; i < s2.length(); i++)
    {
        char ch = s2[i];
        int index = ch - 'a';
        arr[index]--;
    }

    // Checking

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1 = "babbar";
    string s2 = "rbbbaa";
    cout << isAnagram1(s1, s2) << endl;

    return 0;
}