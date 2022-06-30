#include <bits/stdc++.h>
using namespace std;

int numberOfwords(string s)
{
    int ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            ans++;
        }
    }
    return ans;
}
int mostWordsFound(vector<string> &sentences)
{
    int ans = INT_MIN;

    for (int i = 0; i < sentences.size(); i++)
    {
        ans = max(ans, numberOfwords(sentences[i]));
    }
    return ans;
}

int main()
{
    vector<string> sentences = {"please wait", "continue to fight", "continue to win"};

    cout << mostWordsFound(sentences) << endl;

    return 0;
}