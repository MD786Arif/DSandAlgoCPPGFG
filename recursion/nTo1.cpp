#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    fun(n - 1);
}

int main()
{
    fun(23);
    cout<<"\n";
    return 0;
}