// Challenge: 
// Given an array of integers. 
// All numbers occur twice except one number which occurs once. 
// Find the number in O(n) time & constant extra space.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9] = {7, 2, 3, 3, 2, 1, 4, 7, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    int s = 0;
    for(int i : arr){
        s = s ^ i;
    }
    cout << s << endl;
    return 0;
}
