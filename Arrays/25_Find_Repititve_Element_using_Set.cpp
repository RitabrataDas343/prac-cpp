// Challenge:
// We are given an array arr[] of size n. 
// Numbers are from 1 to (n-1) in random order. 
// The array has only one repetitive element. 
// We need to find the repetitive element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 4, 3, 2, 3};
    int length = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> s;
    for(int i : arr){
        if(s.find(i) != s.end()){
            cout << i << endl;
        }
        s.insert(i);
    }
    return 0;
}