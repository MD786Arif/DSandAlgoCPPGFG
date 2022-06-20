#include <bits/stdc++.h>
using namespace std;

// i/p -> arry of rank ,and number of paraths to be prepared

bool  isPossible(int R[], int time, int n, int target)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int j = 1;
        int timei = R[i];
        while (timei <= time)
        {
            count++;
            j++;
            timei += (R[i] * j);
        }
    }

    if (count >= target)
    {
        return true;
    }
    return false;
    
}

int numerOfMinutes(int R[], int n, int p)
{
    // Lets take if the first cook cooks all the parathas then the max time he would take will be
    sort(R, R + n);
    int s = 0;
    int e =  (R[0] * p*(p + 1)) / 2;; // p is the number of paraths
    int ans = -1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (isPossible(R, mid, n, p))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int arr[] = {4, 1, 2, 3, 4};
    int p = 10;
    cout << numerOfMinutes(arr, 5,p) << endl;
    return 0;
}