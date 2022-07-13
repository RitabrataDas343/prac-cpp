#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[5] = {3, 2, 1, 4};
    int arr2[5] = {3, 2, 1, 4};
    int arr3[5] = {3, 2, 1, 4};
    int key = 12;

    //Insert at the end
    int length = sizeof(arr1) / sizeof(arr1[0]);
    arr1[length - 1] = key;
    for(int i = 0; i < length; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    //Insert at the first
    int temp = arr2[0];
    arr2[0] = key;
    length = sizeof(arr2) / sizeof(arr2[0]);
    for(int i = 1; i < length; i++){
        swap(temp, arr2[i]);
    }

    for(int i = 0; i < length; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    //Insert at any position e.g. 2
    int pos = 2;
    temp = arr3[pos];
    length = sizeof(arr3) / sizeof(arr3[0]);
    for(int i = 0; i < length; i++){
        if(i == pos){
            arr3[pos] = key;
        } else if(i > pos){
            swap(temp, arr3[i]);
        }
    }

    for(int i = 0; i < length; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}