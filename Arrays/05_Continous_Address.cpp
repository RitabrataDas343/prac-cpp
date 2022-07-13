#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {0, 4, 5, 6, 7};
    
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << "Address arr[" << i << "] is " << &arr[i] << "\n";
    }
    cout << endl;
    // Integer array has 4 bytes for each member

    for (int i = 0; i < 5; i++){
        cout << "Address arr[" << i << "] is " << arr + i << "\n";
    }
    cout << endl;

    char arr2[4] = {'1', 'w', '3', '['};
    for(int i = 0; i < 4; i++){
        cout << arr2[i] << " " << int(arr2[i]) << endl;
    }

    for (int i = 0; i < 4; i++){
        cout << "Address arr[" << i << "] is " << &arr2[i] << "\n";
    }
    cout << endl;
    //Returns the strring from i-th position

    for (int i = 0; i < 4; i++){
        cout << "Address arr[" << i << "] is " << arr2 + i << "\n";
    }
    cout << endl;
    // Character array has 1 byte for each member
    return 0;
}