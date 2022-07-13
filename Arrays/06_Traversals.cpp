#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {3, 7, 4, 6, 1, 0, 9};

    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 7; i++){
        cout << i[arr] << " ";
    }
    cout << endl;

    for(int i = 0; i < 7; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    for(int i : arr){ 
        cout << i << " ";
    }
    cout << endl;
    //Full array traversal

    for(int i = 6; i >= 0; i--){
        cout << *(arr + i) << " ";
    }
    cout << endl;
    //Reverse traversal
    return 0;
}