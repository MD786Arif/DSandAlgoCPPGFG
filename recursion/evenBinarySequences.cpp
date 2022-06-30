#include <bits/stdc++.h>
using namespace std;
void findSequences(int ls, int rs, char *output, int i, int j)
{
    // Base Case
    if (i > j)
    {
        if (ls == rs)
        {
            cout << output << endl;
                }
        return;
    }

    // 00
    output[i] = '0';
    output[j] = '0';
    findSequences(ls, rs, output, i + 1, j - 1);

    // 01
    output[i] = '0';
    output[j] = '1';
    findSequences(ls, rs + 1, output, i + 1, j - 1);
    // 10
    output[i] = '1';
    output[j] = '0';
    findSequences(ls + 1, rs, output, i + 1, j - 1);
    // 11
    output[i] = '1';
    output[j] = '1';
    findSequences(ls + 1, rs + 1, output, i + 1, j - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    char *arr = new char[2 * n];
    int ls = 0;
    int rs = 0;
    findSequences(ls, rs, arr, 0, 2 * n - 1);

    return 0;
}