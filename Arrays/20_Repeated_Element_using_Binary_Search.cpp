// Challenge: 
// Given an array of integers. 
// All numbers occur twice except one number which occurs once. 
// Find the number in O(n) time & constant extra space.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n){
    int l = 0, r = n - 2;
    int mid = (l+r)/2;

    while(l <= r){
        if(arr[mid] == arr[mid^1]){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
        mid = (l+r)/2;
    }
    
    return arr[l];
}

int main(){
    int arr[9] = {7, 2, 3, 3, 2, 1, 4, 7, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+length);
    cout << binarySearch(arr, length) << endl;
    return 0;
}