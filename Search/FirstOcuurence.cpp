#include <bits/stdc++.h>
using namespace std;
class Ocurences
{

public:
    int firstOcuurence(int arr[], int n, int target)
    {
        int startIn = 0;
        int endIn = n - 1;
        int ans = -1;
        while (startIn <= endIn)
        {
            int mid = startIn + (endIn - startIn) / 2;
            if (arr[mid] == target)
            {
                ans = mid;
                endIn = mid - 1;
            }
            else if (target < arr[mid])
            {
                endIn = mid - 1;
            }
            else
            {
                startIn = mid + 1;
            }
        }
        return ans;
    }

    int lastOcuurence(int arr[], int n, int x)
    {
        int start = 0, end = n - 1, ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == x)
            {
                ans = mid;
                start = mid + 1;
            }
            else if (x < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{
    Ocurences o;
    int arr[] = {2, 3, 4, 5, 5, 8};
    int x = 4;
    int firstO = o.firstOcuurence(arr, 6, x);
    int lastO = o.lastOcuurence(arr, 6, x);
    cout << "First Ocurrence of " << x << " " << firstO << endl;
    cout << "Last Ocurrence of " << x << " " << lastO << endl;
    cout << "Total number of occurencs of " << x << " " << ((lastO - firstO) + 1) << endl;

    return 0;
}