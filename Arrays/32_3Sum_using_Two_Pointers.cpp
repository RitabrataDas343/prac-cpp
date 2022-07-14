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
    sort(arr, arr+length);

    for(int i = 0; i < length - 2; i++){
        int left = i + 1, right = length - 1;
        int two_sum = x - arr[i];
        while(left < right){
            if(arr[left] + arr[right] == two_sum){
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                flag = true;
                break;
            }

            if(arr[left] + arr[right] < two_sum){
                left++;
            } else {
                right--;
            }
        }
        if(flag) break; //IF Only one solution exists
    }
    

    if(!flag){
        cout << "NOT EXIST" << endl;
    }
    return 0;
}