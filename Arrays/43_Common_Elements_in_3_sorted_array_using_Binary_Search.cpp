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

    for(int i = 0; i < len1; i++){
        if(binary_search(arr2, arr2+len2, arr1[i]) and binary_search(arr3, arr3+len3, arr1[i])){
            cout << arr1[i] << " ";
            flag = true;
        }
    }
    
    if(!flag) cout << "No common elements.\n";
    
    return 0;
}
