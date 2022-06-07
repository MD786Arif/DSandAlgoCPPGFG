#include <bits/stdc++.h>
using namespace std;

int SumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + SumOfN(n - 1);
}
int main()
{
    int n;
    cout << "Enter the element of whom you want to find the sum " << endl;
    cin >> n;
    cout << "The sum is " << SumOfN(n) << endl;
    return 0;
}