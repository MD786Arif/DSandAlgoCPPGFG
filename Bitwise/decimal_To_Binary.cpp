#include<bits/stdc++.h>
using namespace std;

void deciToBinary(int n){
    if(n==0){
        return;
    }
    deciToBinary(n/2);
    cout<<(n%2);
}
int main() {
    deciToBinary(7);
    cout<<endl;

return 0;
} 