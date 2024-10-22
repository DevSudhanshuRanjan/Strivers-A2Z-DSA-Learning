#include <bits/stdc++.h>
using namespace std;

//Iterative code
int binSrch(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

//recursive code
int rbinSrch(int arr[], int low , int high, int target ){
    int mid = (low+high)/2; 
    if (low>high)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        return mid;
    }
    
    else if (arr[mid]>target)
    {
        return rbinSrch(arr,low,mid-1,target);
    }
    else return rbinSrch(arr,mid+1,high,target);
    
    
}


int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // first of all the array must me sorted.
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binSrch(arr, n, 6)<<endl;
    cout << rbinSrch(arr,0,8, 6)<<endl;
    return 0;
}