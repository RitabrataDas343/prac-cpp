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

    int missingElement, element;
    for (int i = 0; i < length; i++){
        element = arr[abs(arr[i])];
        if(element < 0){
            missingElement = arr[i];
            break;
        }
        arr[abs(arr[i])] = -arr[abs(arr[i])];
    }
    
    cout << abs(missingElement) << endl;
    return 0;
}