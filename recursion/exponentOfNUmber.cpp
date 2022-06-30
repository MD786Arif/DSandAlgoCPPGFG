#include <bits/stdc++.h>
using namespace std;

int exponent(int base, int p)
{

    if (p == 0)
    {
        return 1;
    }
    int smallerProblem = exponent(base, p / 2);
    if (p & 1)
    {
        return smallerProblem * smallerProblem * base;
    }
    return smallerProblem * smallerProblem;
}

int main()
{
    cout << exponent(3, 5) << endl;

    return 0;
}