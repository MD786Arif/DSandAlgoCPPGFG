#include<bits/stdc++.h>
using namespace std;

int columnWiseSum(int arr[][3],int rows,int cols){
 int maxSUm = INT_MIN;
 for(int i = 0;i<rows;i++){
     int sum = 0;
     for(int j = 0;j<cols;j++){
        sum+=arr[j][i];
     }
     maxSUm = max(maxSUm,sum);
     cout<<"Column no --> "<<i<<" "<<sum<<endl;
 }

return maxSUm;
}

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<columnWiseSum(arr,3,3)<<endl;

return 0;
} 