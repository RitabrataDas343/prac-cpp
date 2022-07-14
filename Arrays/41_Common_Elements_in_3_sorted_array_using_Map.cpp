// Challenge: 
// Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100}; 
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    bool flag = false;

    map<int, int> mp;
    for(int i: arr1) {
        mp[i]++;
    }
    for(int i : arr2) {
        mp[i]++;
    }
    for(int i : arr3) {
        mp[i]++;
    }

    for(auto i : mp){
        if(i.second == 3){
            cout << i.first << " ";
            flag = true;
        }
    }
    
    if(!flag) cout << "No common elements.\n";
    
    return 0;
}
