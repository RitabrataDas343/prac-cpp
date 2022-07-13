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
    int arr[6] = {1, 6, 9, 11, 12, 15};
    int key = 11;
    int length = sizeof(arr)/sizeof(arr[0]);

    int pos = binarySearch(arr, 0, length - 1, key);
    if(pos == -1){
        cout << "Element Not Found";
    } else {
        for(int i = pos; i < length - 1; i++){
            swap(arr[i], arr[i+1]);
        }
        arr[length-1] = -1;
        
        for(int i = 0; i < length - 1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}