#include<bits/stdc++.h>
using namespace std;
/*
 Relational operator includes <,<=,>,>=,=
*/

int main(){
int a,b,c;
cout<<"Enter both the numbers "<<endl;
cin>>a>>b>>c;
if(a>b&&a>c){
    cout<<"The largest number is "<<a<<endl;
}else if(b>a&&b>c){
    cout<<"The largest number is "<<b<<endl;
}else{
    cout<<"The largest number is "<<c<<endl;

}

return 0;
}