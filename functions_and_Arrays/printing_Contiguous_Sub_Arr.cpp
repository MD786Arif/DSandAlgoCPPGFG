#include <bits/stdc++.h>
using namespace std;

void larg_Contiguous_SubArr(int arr[], int n)
{
    int maxSF = INT16_MIN;
    int maxEH = 0;
    int count = -1;
    for (int i = 0; i < n; i++)
    {

        maxEH += arr[i];
        maxSF = max(maxSF, maxEH);

        if (maxEH < 0)
        {
            count = -1;
            maxEH = 0;
        }
        else
        {
            count++;
        }
    }

    int start_Index = n - count - 1;
    int endINdex = start_Index + count;
    for (int i = n - count - 1; i < endINdex; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[8] = {-2, -3, 4, 1, -2, 1, 5, -3};

    //    cout<<"Max Contiguous sub array sum "<<
    larg_Contiguous_SubArr(arr, 8);

    return 0;
}