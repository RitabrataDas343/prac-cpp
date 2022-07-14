// Challenge:
// Given an array A[] of n numbers and another number x.
// Determine whether or not there exist two elements in A[] whose sum is exactly x. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, -2, 0, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int x = 7;

    unordered_set<int> s;
    bool flag = false;
    int temp;
    for(int i : arr){
        temp = x - i;
        if(s.find(temp) != s.end()){
            cout << temp << " " << i << endl;
            flag = true;
            break;
        }
        s.insert(i);
    }

    if(!flag){
        cout << "Not Exists.\n";
    }
    return 0;
}