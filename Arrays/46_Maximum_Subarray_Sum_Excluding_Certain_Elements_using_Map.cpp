// Challenge:
// Given an array of A of n integers and an array B of m integers.
// Find the Maximum Contiguous Subarray Sum of array A such that any element of array B is not present in that subarray.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1, 7, -10, 6, 2};
    int b[] = {5, 6, 7, 1};

    int len_a = sizeof(a)/sizeof(a[0]);
    int len_b = sizeof(b)/sizeof(b[0]);

    unordered_map<int, int> mp;
    for(int i : a){
        mp[i]++;
    }
    for(int i : b){
        mp[i] = 0;
    }

    int sum = 0;
    for(auto i : mp){
        if(i.first > 0){
            sum += i.second*i.first;
        }
    }

    cout << sum << endl;
    return 0;
}