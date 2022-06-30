#include<bits/stdc++.h>
using namespace std;
void solve( vector<vector<int>>&ans, vector<int>&temp,int k ,int n,int num){
        
        if(k==0&&n==0){
            ans.push_back(temp);
            return;
        }
        if(n<0){
            return;
        }
        for(int i = num;i<10;i++){
            
            temp.push_back(i);
            solve(ans,temp,k-1,n-i,i+1);
            
//             Backtrack
            temp.pop_back();      
            
        }
        
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
         vector<vector<int>> ans;
         vector<int>temp;
        
        solve(ans,temp,k,n,1);
        return ans;
        
        
    }
int main() {

return 0;
} 