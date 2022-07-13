// Challenge: 
// Given an array of integers. 
// All numbers occur twice except one number which occurs once. 
// Find the number in O(n) time & constant extra space.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9] = {7, 2, 3, 3, 2, 1, 4, 7, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    set<int> s; //USES EXTRA SPACE

    int total = 0;
    for(int i : arr){
        s.insert(i);
        total += i;
    }

    int sum = 0;
    for(auto i : s){
        sum += i;
    }

    cout << 2 * sum - total << endl;
    return 0;
}