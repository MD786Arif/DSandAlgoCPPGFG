#include <bits/stdc++.h>

using namespace std;
void reverse(char arr[])
{
    int s = 0;
    int e = strlen(arr) - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    char arr[10] = "Mohammad";
    reverse(arr);
    cout << arr << endl;

    return 0;
}