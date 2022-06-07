#include<bits/stdc++.h>
using namespace std;
void number_Pattern(int n){
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n-i+1;j++){
        cout<<j<<" ";
    }
    cout<<"\n";
}
}
void star_Pattern(int n){
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n-i+1;j++){
        cout<<"* ";
    }
    cout<<"\n";
}
}
int main(){

number_Pattern(5);
return 0;
}