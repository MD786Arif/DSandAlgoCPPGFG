#include <bits/stdc++.h>
using namespace std;
void number_Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int z = i;
        if (i == 1 || i == n)
        {
            for (int j = i; j <= n; j++)
            {
                cout << j<<" ";
            }
        }
        else
        {

            cout << z++<<" ";
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << "  ";
                z++;
            }
            cout << z<<" ";
        }
        cout << "\n";
    }
}

void star_Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = i; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    number_Pattern(5);
    star_Pattern(5);

    return 0;
}