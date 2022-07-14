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
    unordered_set<int> s;
    for(int i = 0; i < length - 2; i++){
        int two_sum = x - arr[i];
        for(int j = i + 1; j < length; j++){
            if(s.find(two_sum - arr[j]) != s.end()){
                cout << arr[i] << " " << arr[j] << " " << two_sum - arr[j] << endl;
                flag = true;
                break;
            }
            s.insert(arr[j]);
        }
        if (flag) break; //IF ONLY ONE SOLUTION EXISTS
    }
    

    if(!flag){
        cout << "NOT EXIST" << endl;
    }
    return 0;
}