#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int n = 10;
    int arr2[n];
    cout << sizeof(arr2) << " " << sizeof(arr2)/sizeof(int) << endl;

    char arr3[n];
    cout << sizeof(arr3) << " " << sizeof(arr3)/sizeof(char) << endl;

    // for(int i = 0; i < n; i++){
    //     cout << arr3[i] << endl;
    // }
    // Will result in faulty characters

    return 0;
}