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

    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}