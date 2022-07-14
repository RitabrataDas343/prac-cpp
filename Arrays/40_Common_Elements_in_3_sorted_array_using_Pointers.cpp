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

    int left1 = 0, left2 = 0, left3 = 0;
    while(left1 != len1 and left2 != len2 and left3 != len3){
        if(arr1[left1] == arr2[left2] and arr2[left2] == arr3[left3]){
            cout << arr1[left1] << " ";
            flag = true;
            left1++;
        } else {
            int min1 = min(arr1[left1], arr2[left2]);
            int min2 = min(min1, arr3[left3]);
            if(min2 == arr1[left1]){
                left1++;
            } else if(min2 == arr2[left2]){
                left2++;
            } else {
                left3++;
            }
        }
    }
    if(!flag) cout << "No common elements.\n";
    
    return 0;
}
