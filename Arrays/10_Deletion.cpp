#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[5] = {3, 2, 1, 4, 5};
    int arr2[5] = {3, 2, 1, 4, 5};
    int arr3[5] = {3, 2, 1, 4, 5};

    //Delete at the end
    int length = sizeof(arr1) / sizeof(arr1[0]);
    arr1[length-1] = -1;
    for(int i = 0; i < length-1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    //Delete at the first
    length = sizeof(arr2) / sizeof(arr2[0]);
    for(int i = 0; i < length - 1; i++){
        swap(arr2[i], arr2[i+1]);
    }
    arr2[length-1] = -1;

    for(int i = 0; i < length-1; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    //Delete at any position e.g. 2
    int pos = 2;
    length = sizeof(arr3) / sizeof(arr3[0]);
    for(int i = pos; i < length - 1; i++){
        swap(arr3[i], arr3[i+1]);
    }
    arr3[length-1] = -1;

    for(int i = 0; i < length - 1; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}