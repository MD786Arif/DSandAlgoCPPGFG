#include <bits/stdc++.h>
using namespace std;
void number_Pattern(int n)
{
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int x = i;
        int r = 2 * i - 1;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k < (r / 2) + 1)
            {
                cout << x++ << " ";
               
            }
            else
            {
                cout << x-- << " ";
            }
        }

        cout << "\n";
    }
}
void star_Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
int main()
{
    // star_Pattern(5);
    number_Pattern(5);
}