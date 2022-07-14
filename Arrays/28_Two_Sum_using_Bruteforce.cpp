// Challenge:
// Given an array A[] of n numbers and another number x.
// Determine whether or not there exist two elements in A[] whose sum is exactly x. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, -2, 0, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int x = 7;

    bool flag = false;
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(arr[i] + arr[j] == x){
                cout << arr[i] << " " << arr[j] << endl;
                flag = true;
                break;
            }
        }
    }

    if(!flag){
        cout << "Not Exists.\n";
    }
    return 0;
}