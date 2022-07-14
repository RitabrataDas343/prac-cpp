// Challenge
// A step array is an array of integers where each element has a difference of at most k with its neighbor.
// We need to find the index value of x if multiple-element exist to return the first occurrence of the key.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5, 10, 13, 19, 10, 18, 13};
    int length = sizeof(arr)/sizeof(arr[0]);
    int k = 10;
    int x = 13;

    int i = 0;
    bool flag = false;
    while (i < length){
        if (arr[i] == x){
            cout << i << endl;
            flag = true;
            break;
        }
        i += max(1, abs(arr[i]-x)/k);
    }
    if(!flag) cout << "Number is not present!";
    return 0;
}