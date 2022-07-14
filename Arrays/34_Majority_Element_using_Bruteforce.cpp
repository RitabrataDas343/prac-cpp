// Challenge:
// Write a function which takes an array and prints the majority element.
// Otherwise prints “No Majority Element”. 
// A majority element in an array A[] of size n is an element that appears more than n/2 times. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 3, 2, 3, 3, 3, 4, 3, 3, 5};
    int length = sizeof(arr)/sizeof(arr[0]);

    int count;
    bool flag = false;
    for(int i = 0; i < length; i++){
        count = 0;
        for(int j = i + 1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > length / 2) {
            cout << arr[i] << endl;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout << "No Majority Element\n";
    }
    return 0;
}