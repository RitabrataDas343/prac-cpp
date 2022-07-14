// Challenge:
// Write a function which takes an array and prints the majority element.
// Otherwise prints “No Majority Element”. 
// A majority element in an array A[] of size n is an element that appears more than n/2 times. 

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int arr[] = {1, 3, 2, 3, 3, 3, 4, 3, 3, 5};
    int length = sizeof(arr)/sizeof(arr[0]);

    int maj_index = 0, count = 1;
    for (int i = 1; i < length; i++) {
        if (arr[maj_index] == arr[i]){
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    
    count = 0;
    for (int i = 0; i < length; i++){
        if(arr[i] == arr[maj_index]){
            count++;
        }
    }
  
    if (count > length / 2){
        cout << arr[maj_index] << endl;
    } else {
        cout << "No Majority Element.\n";
    }

    return 0;
}