#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int row,col;
row = n;
col = n;
for(int i = 0;i<row;i++){
    for(int j = 0;j<col;j++){
        cout<<"* ";
    }
    cout<<"\n";
}
return 0;
}