#include<bits/stdc++.h>
using namespace std;

bool check_Palindrome(string s,int start,int end){
   if(start>=end){
       return true;
   }

    return (s[start]==s[end])&&check_Palindrome(s,start+1,end-1) ;
}
int main() {

string s = "abba";
cout<<check_Palindrome(s,0,3)<<endl;
return 0;
} 