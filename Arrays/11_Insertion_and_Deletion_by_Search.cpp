#include<bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

void insertElement(int arr[], int n, int key, int pos){
    if(pos >= n){
        cout << "Index Out of Range.\n";
        return;
    }
    
    int temp = arr[pos];
    for(int i = 0; i < n; i++){
        if(i == pos){
            arr[pos] = key;
        } else if(i > pos){
            swap(temp, arr[i]);
        }
    }
}

void deleteElement(int *arr, int n, int key){
    if(!linearsearch(arr, n, key)){
        cout << "Element NOT found.\n";
        return;
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i] == key){
            swap(arr[i], arr[i+1]);
        }
    }
    arr[n-1] = 0;
}

void displayArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {3, 9, 7, 6, 5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int insertKey = 2;
    int deleteKey = 7;
    int insertPos = 4;

    insertElement(arr, length, insertKey, insertPos);
    // deleteElement(arr, length, deleteKey);
    displayArray(arr, length);
    return 0;
}