#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {2, 5, 9, 3, 6, 5, 2, 2, 3, 0};
    int key = 5;
    int pos = -1;

    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++){
        if(arr[i] == key){
            pos = i;
            cout << key << " is found at index: " << pos << endl;
        }
    }

    if (pos == -1){
        cout << "NOT FOUND" << endl;
    }
    //Position can be stored in vector
    return 0;
}