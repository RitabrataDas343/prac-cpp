// Challenge: 
// Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 5, 10, 20, 40, 80, 80};
    int arr2[] = {6, 7, 20, 80, 80, 100}; 
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 80, 120};

    int len1 = sizeof(arr1)/sizeof(arr1[0]); 
    int len2 = sizeof(arr2)/sizeof(arr2[0]); 
    int len3 = sizeof(arr3)/sizeof(arr3[0]); 
    bool flag = false;

    unordered_set<int> s1, s2, s3;
    for(int i : arr1){
        s1.insert(i);
    }
    for(int i : arr2){
        s2.insert(i);
    }

    for(int i : arr3){
        if(s1.find(i) != s1.end() and s2.find(i) != s2.end()){
            if (s3.find(i) == s3.end()){
                cout << i << " ";
                flag = true;
            }
            s3.insert(i);
        }
    }
    
    if(!flag) cout << "No common elements.\n";
    
    return 0;
}
