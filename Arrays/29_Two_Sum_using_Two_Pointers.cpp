// Challenge:
// Given an array A[] of n numbers and another number x.
// Determine whether or not there exist two elements in A[] whose sum is exactly x. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, -2, 0, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int x = 7;

    sort(arr, arr+length);
    bool flag = false;
    int left = 0, right = length - 1;
    while(left < right){
        if(arr[left] + arr[right] == x){
            cout << arr[left] << " " << arr[right] << endl;
            flag = true;
            break;
        }
        if(arr[left] + arr[right] < x){
            left++;
        } else {
            right--;
        }
    }

    if(!flag){
        cout << "Not Exists.\n";
    }
    return 0;
}