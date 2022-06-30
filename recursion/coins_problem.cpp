#include <bits/stdc++.h>
using namespace std;

int solve(int coins[], int n, int amount, int currentCoin)
{
    if (amount == 0)
    {
        return 1;
    }
    if (amount < 0)
    {
        return 0;
    }
    int ways = 0;

    for (int i = currentCoin; i < n; i++)
    {
        ways += solve(coins, n, amount - coins[i], i);
    }

    return ways;
}

int main()
{
    int coins[] = {1, 2};
    int amount = 4;

    cout << solve(coins, 2, amount, 0) << endl;

    return 0;
}