#include <bits/stdc++.h>
using namespace std;
long long int BinarySearhc(int n)
{
    int s = 0;
    int e = n;
   long long int ans = 0;
    while (s <= e)
    {
     long long int mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int Sqrt(int x)
{
    return BinarySearhc(x);
}
int main()
{

    cout << Sqrt(100000) << endl;
    return 0;
}