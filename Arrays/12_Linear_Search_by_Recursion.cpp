#include<bits/stdc++.h>
using namespace std;

int linear_search(int *arr, int n, int key){
    n--;
    if(n < 0){
        return -1;
    }
    if(arr[n] == key){
        return n;
    }
    return linear_search(arr, n, key);
}

int main(){
    int arr[5] = {2, 5, 4, 1, 3};
    int key = 3;

    int pos = linear_search(arr, 5, key);
    cout << pos << endl;

    return 0;
}