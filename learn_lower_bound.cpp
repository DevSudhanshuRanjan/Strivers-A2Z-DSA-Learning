#include <bits/stdc++.h>
using namespace std;

int find_lower_bound(int arr[],int n,int target){
    int low = 0, high = n-1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
    
}

int main(){

    int range ;
    cout<<"Enter the range of the array of your choice: ";
    cin>>range;
    int arr[range];
    cout<<"Enter the values for the array in the sorted order: ";
    for (int i = 0; i < range; i++)
    {
        cin>>arr[i];
    }
    int indx = find_lower_bound(arr,range,5);
    cout<<"The lower bound for the searched element in the array is:"<<indx;

    return 0;
}