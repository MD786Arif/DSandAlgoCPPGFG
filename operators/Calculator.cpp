#include <bits/stdc++.h>
using namespace std;
int main()
{
    int status;
    do
    {
        int a, b;
       char c;

        cout << "Enter the first Number ";
        cin >> a;
        cout << "Enter the second Number ";
        cin >> b;
        cout << "Enter the operator " << endl;
        cin >> c;
        switch (c)
        {
        case '+':
            cout << "The result is : " << (a + b) << endl;
            break;
        case '-':
            cout << "The result is : " << (a - b) << endl;
            break;
        case '*':
            cout << "The result is : " << (a * b) << endl;
            break;
        case '/':
            cout << "The result is : " << (a / b) << endl;
            break;
        case '%':
            cout << "The result is : " << (a % b) << endl;
            break;
        default:
            break;
        }
        cout<<"If you want to continue enter 1 else 0"<<endl;
        cin>>status;

    } while (status ==1);
    return 0;
}