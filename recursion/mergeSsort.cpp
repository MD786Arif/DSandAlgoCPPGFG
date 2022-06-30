#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{

    int mid = (s + e) / 2;

    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    // create  left and right parts
    int *left = new int[leftLength];
    int *right = new int[rightLength];

    // copy into left array
    int originalIndex = s;
    for (int i = 0; i < leftLength; i++)
    {
        left[i] = arr[originalIndex++];
    }

    // copy into right array
    originalIndex = mid + 1;
    for (int i = 0; i < rightLength; i++)
    {
        right[i] = arr[originalIndex++];
    }

    // now we have 2 sorted arrays
    // we have to merge them

    int leftIndex = 0;
    int rightIndex = 0;
    originalIndex = s;

    // compare elements from left and right array and copy into original array
    while (leftIndex < leftLength && rightIndex < rightLength)
    {
        if (left[leftIndex] <= right[rightIndex])
        {
            arr[originalIndex++] = left[leftIndex++];
        }
        else
        {
            arr[originalIndex++] = right[rightIndex++];
        }
    }
    // check if any more element is present in left array ,
    //  then copy it to original array
    while (leftIndex < leftLength)
    {
        arr[originalIndex++] = left[leftIndex++];
    }

    // check if any more element is present in right array ,
    //  then copy it to original array
    while (rightIndex < rightLength)
    {
        arr[originalIndex++] = right[rightIndex++];
    }
    delete[] left;
    delete[] right;
}

void inPLace_Merge(int arr[], int start, int mid, int end)
{
    int start2 = mid + 1;

    // If the direct sort is already sorted

    if (arr[mid] <= arr[mid + 1])
    {
        return;
    }
    // Two pointers to maintain start of tow arrays two merge
    while (start <= mid && start2 <= end)
    {
        // If elemnt 1 is at right place

        if (arr[start] <= arr[start2])
        {
            start++;
        }
        else
        {
            int value = arr[start2];
            int index = start2;

            // Shift all the elements between element 1 and element 2 right by 1
            while (index != start)
            {
                arr[index] = arr[index - 1];
                index--;
            }

            arr[start] = value;

            start++;
            mid++;
            start2++;
        }
    }
}

void mergeSort(int arr[], int s, int e)
{

    if (s < e)
    {
        int mid = (s + e) / 2;
        // Left sorted Array
        mergeSort(arr, s, mid);

        // Left sorted Array
        mergeSort(arr, mid + 1, e);

        // merge the two arrays

        inPLace_Merge(arr, s, mid,e);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = 6;
    mergeSort(arr, 0, size - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
int mergeAndCount(vector<int> nums, int s, int e)
{
    int mid = s + (e - s) / 2;
    int l1 = mid - s + 1;
    int l2 = e - s;
    int globalCount = 0;

    int *leftArr = new int[l1];
    int *rightArr = new int[l2];

    //  Copying the left part
    int originalIndex = s;
    for (int i = 0; i < l1; i++)
    {
        leftArr[i] = nums[originalIndex++];
    }
    //  Copying the Right part
    originalIndex = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        rightArr[i] = nums[originalIndex++];
    }

    // merging the arrays
    originalIndex = s;
    int i = 0, j = 0;
    while (i < l1 && j < l2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            nums[originalIndex++] = leftArr[i++];
        }
        else
        {
            globalCount++;
            nums[originalIndex++] = rightArr[j++];
        }
    }
    while (i < l1)
    {

        nums[originalIndex++] = leftArr[i++];
    }
    while (j < l2)
    {

        nums[originalIndex++] = rightArr[i++];
    }

    return globalCount;
}


*/