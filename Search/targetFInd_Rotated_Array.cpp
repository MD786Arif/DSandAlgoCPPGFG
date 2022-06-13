#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int start,int end ,int target)
{

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
      if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int index(vector<int> arr, int target)
{
    int n = arr.size()-1;
    int pivotI = pivot(arr);
    if(target>=arr[pivotI] && target<=arr[n]){
        return binarySearch(arr,pivotI,n,target);
    }else{
        return binarySearch(arr,0,pivotI-1,target);
    }
}

int main()
{
    vector<int>arr = {3,1};
    cout<<index(arr,1)<<endl;

    return 0;
}