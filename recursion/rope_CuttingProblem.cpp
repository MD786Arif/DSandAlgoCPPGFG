#include <bits/stdc++.h>
using namespace std;

int number_Of_Pieces(int n, int a, int b, int c)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    return number_Of_Pieces(n - a, a, b, c) + number_Of_Pieces(n - b, a, b, c) + number_Of_Pieces(n - c, a, b, c);
}
int main()
{
    cout<<number_Of_Pieces(5,2,5,1)<<endl;

    return 0;
}