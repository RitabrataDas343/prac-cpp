#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int left = 0, right = n - 1;
    int middle = (left + right) / 2;

    while(left <= right){
        if(arr[middle] == key){
            return middle;
        }

        if(key < arr[middle]){
            right = middle - 1;
        } else {
            left = middle + 1;
        }
        
        middle = (left + right) / 2;
    }
    
    return -1;
}

int main(){
    int arr[5] = {1, 3, 7, 9, 11};
    int pos = binarySearch(arr, 5, 9);

    if(pos < 0){
        cout << "NOT FOUND" << endl;
    } else {
        cout << pos << endl;
    }

    return 0;
}