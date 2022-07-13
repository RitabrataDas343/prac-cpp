#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {2, 5, 9, 3, 6};
    int key = 5;
    int pos = -1;

    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++){
        if(arr[i] == key){
            pos = i;
        }
    }

    if (pos == -1){
        cout << "NOT FOUND" << endl;
    } else {
        cout << key << " is found at index: " << pos << endl;
        cout << key << " is found at location: " << pos + 1 << endl;
    }

    return 0;
}