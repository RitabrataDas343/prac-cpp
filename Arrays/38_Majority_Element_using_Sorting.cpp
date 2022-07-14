// Challenge:
// Write a function which takes an array and prints the majority element.
// Otherwise prints “No Majority Element”. 
// A majority element in an array A[] of size n is an element that appears more than n/2 times. 

#include<bits/stdc++.h>
using namespace std; 


int main(){
    int arr[] = {1, 3, 2, 3, 3, 3, 4, 3, 3, 5};
    int length = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + length);
    int count = 1, maxcount = INT_MIN;
    bool flag = false;
    for(int i = 0; i < length - 1; i++){
        if(arr[i] == arr[i+1]){
            count++;
        } else {
            if(count > length/2){
                cout << arr[i] << endl;
                flag = true;
                break;
            }
            count = 1;
        }
    }

    if(!flag){
        cout << "No Majority Element.\n";
    }
    return 0;
}



  
    