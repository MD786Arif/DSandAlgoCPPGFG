#include <bits/stdc++.h>
using namespace std;

void findCombinations(string input, int index, string output)
{
    if (index == input.length())
    {
        cout << output << endl;
        return;
    }
    // Add no space
    output.push_back(input[index]);
    findCombinations(input, index + 1, output);
    // Add space
    output.push_back(' ');
    cout << "I am outsude index " << index << endl;
    if (input[index + 1] != '\0')
    {
        findCombinations(input, index + 1, output);
    }
}

int main()
{
    string input = "123";
    string output = "";
    findCombinations(input, 0, output);

    return 0;
}