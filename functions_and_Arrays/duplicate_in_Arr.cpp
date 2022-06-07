#include <bits/stdc++.h>
using namespace std;

void duplicates(int arr[], int n)
{
    int k = n-1;
   int sum1 = (k*(k+1))/2;
   int sum2 = 0;
   for(int i=0;i<=n;i++){
        sum2+=arr[i];
   }
   cout<<(sum2-sum1)<<endl;
}

int main()
{
    int arr[6] = {1,2,3,4,5,5};
    duplicates(arr, 6);

    return 0;
}