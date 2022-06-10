#include <bits/stdc++.h>
using namespace std;

int sumR(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (n % 10) + sumR(n / 10);
}

int main()
{
    int n;
    cout << "Enter the digit of whom u wannna find the sum " << endl;
    cin >> n;
    cout << "The sum of the digits of your number is " << sumR(n) << endl;

    return 0;
}