// Challenge: 
// Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100}; 
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int len1 = sizeof(arr1)/sizeof(arr1[0]); 
    int len2 = sizeof(arr2)/sizeof(arr2[0]); 
    int len3 = sizeof(arr3)/sizeof(arr3[0]); 
    bool flag = false;

    vector<int> v;
    int left1 = 0, left2 = 0;
    while(left1 != len1 and left2 != len2){
        if(arr1[left1] == arr2[left2]){
            v.push_back(arr1[left1]);
            left1++;
        } else {
            int minimum = min(arr1[left1], arr2[left2]);
            if(minimum == arr1[left1]){
                left1++;
            } else {
                left2++;
            }v.push_back(arr1[left1]);
        }
    }
    
    left1 = 0, left2 = 0;
    while(left1 != len3 and left2 != v.size()){
        if(arr3[left1] == v[left2]){
            cout << arr3[left1] << " ";
            flag = true;
            left1++;
        } else {
            int minimum = min(arr3[left1], v[left2]);
            if(minimum == arr3[left1]){
                left1++;
            } else {
                left2++;
            }
        }
    }
    
    if(!flag) cout << "No common elements.\n";
    
    return 0;
}
