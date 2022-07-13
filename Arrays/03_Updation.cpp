#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {5, 2, 10, -3};
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    arr[3] = 5;
    arr[1] = 12;
    // arr[10] = 13; Segementation Error

    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}