#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[])
{

    int index = 0;
    while (arr[index] != '\0') // or only arr[index]
    {
        index++;
    }
    return index;
}
int main()
{
    char arr[5];
    cin >> arr;
    cout << strlen(arr) << endl;
    cout<<strcmp("name","Arif");
    return 0;
}