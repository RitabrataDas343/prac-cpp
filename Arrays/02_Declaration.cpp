#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {3, 9, 1, 2, 0, 6};
    cout << arr[3] << " " << arr[2] << endl;

    int arr2[4] = {1};
    for(int i = 0; i < 4; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    // int arr3[4] = {2, 3, 6, 8, 10, 12}; 
    // It is invalid due to segmentation error

    return 0;
}