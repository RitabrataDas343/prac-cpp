// Challenge: 
// Given an array of integers. 
// All numbers occur twice except one number which occurs once. 
// Find the number in O(n) time & constant extra space.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9] = {7, 2, 3, 3, 2, 1, 4, 7, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    map<int, int> mp; // USES EXTRA SPACE

    for(int i : arr){
        mp[i]++;
    }
    for(auto i : mp){
        if(i.second == 1){
            cout << i.first << endl;
        }
    }
    return 0;
}
