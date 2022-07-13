#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int left, int right, int key){
    int middle = (left + right) / 2;

    if(left > right){
        return -1;
    }

    if(arr[middle] == key){
        return middle;
    } 

    if(key < arr[middle]){
        return binarySearch(arr, left, middle - 1, key);
    }
    return binarySearch(arr, middle + 1, right, key);
    
}

int main(){
    int arr[5] = {1, 3, 7, 9, 11};
    int length = sizeof(arr)/sizeof(arr[0]);
    int pos = binarySearch(arr, 0, length-1, 1);

    if(pos < 0){
        cout << "NOT FOUND" << endl;
    } else {
        cout << pos << endl;
    }

    return 0;
}