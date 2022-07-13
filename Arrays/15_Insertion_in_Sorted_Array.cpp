#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int left, int right, int key){
    int middle = (left + right) / 2;

    if(left > right){
        return middle;
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
    int arr[6] = {1, 6, 9, 11, 15};
    int key = 12;
    int length = sizeof(arr)/sizeof(arr[0]);

    int pos = binarySearch(arr, 0, 4, key);
    int temp = arr[pos+1];
    for(int i = 0; i < length; i++){
        if(i == pos + 1){
            arr[pos+1] = key;
        } else if (i > pos+1){
            swap(temp, arr[i]);
        }
    }

    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}