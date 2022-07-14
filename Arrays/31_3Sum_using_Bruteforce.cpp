// Challenge:
// Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
// If there is such a triplet present in array, then print the triplet and return true. 
// Else return false.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, -2, 5, 8, 1, 4, -5, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int x = 17;

    bool flag = false;
    for(int i = 0; i < length - 2; i++){
        for(int j = i + 1; j < length - 1; j++){
            for(int k = j + 1; k < length; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) break; // If only one solution exist
        }
        if(flag) break; // If only one solution exist;
    }

    if(!flag){
        cout << "NOT EXIST" << endl;
    }
    return 0;
}