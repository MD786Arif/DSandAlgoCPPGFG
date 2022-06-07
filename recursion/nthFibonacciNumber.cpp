#include <bits/stdc++.h>
using namespace std;

int nthFib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return nthFib(n - 1) + nthFib(n - 2);
}
int main()
{
    cout<<nthFib(3)<<endl;

    return 0;
}