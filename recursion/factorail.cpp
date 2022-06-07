#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main() {
    int n;
    cout<<"Enter the number of whom you wanna find the factorial "<<endl;
    cin>>n;
    cout<<"Factorial of the given number "<<factorial(n)<<endl;

return 0;
} 