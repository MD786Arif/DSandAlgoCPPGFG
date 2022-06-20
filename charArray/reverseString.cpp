#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int n = s.size();

    int j = n - 1;
    int i = 0;

    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main()
{

    vector<char> s = {'H', 'E', 'L', 'L', 'O', '\n'};
    reverseString(s);

    return 0;
}