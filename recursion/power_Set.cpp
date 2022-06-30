#include <bits/stdc++.h>
using namespace std;

void printPowerSet(string input, int index, string output)
{
    if (index == input.length())
    {
        cout << output << endl;
        return;
    }

    // Exclude
    printPowerSet(input, index + 1, output);
    // Include
    output.push_back(input[index]);
    printPowerSet(input, index + 1, output);
}

int main()
{
    string input = "abc";
    string output = "";
    printPowerSet(input, 0, output);

    return 0;
}