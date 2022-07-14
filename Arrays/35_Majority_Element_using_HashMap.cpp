// Challenge:
// Write a function which takes an array and prints the majority element.
// Otherwise prints “No Majority Element”. 
// A majority element in an array A[] of size n is an element that appears more than n/2 times. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 3, 2, 3, 3, 3, 4, 3, 3, 5};
    int length = sizeof(arr)/sizeof(arr[0]);

    map<int, int> mp;
    bool flag = false;
    
    for(int i : arr){
        mp[i]++;
    }

    for(auto i : mp){
        if(i.second > length / 2){
            cout << i.first << endl;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout << "No Majority Element\n";
    }
    return 0;
}