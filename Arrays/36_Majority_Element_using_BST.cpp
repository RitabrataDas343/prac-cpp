// Challenge:
// Write a function which takes an array and prints the majority element.
// Otherwise prints “No Majority Element”. 
// A majority element in an array A[] of size n is an element that appears more than n/2 times. 

#include<bits/stdc++.h>
using namespace std;

struct node {
    int key;
    int c = 0;
    struct node *left, *right;
};
  
// A utility function to create a new BST node
struct node* newNode(int item){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->c = 1;
    temp->left = temp->right = NULL;
    return temp;
}
  

struct node* insert(struct node* node, int key, int& ma){
    if (node == NULL) {
        if (ma == 0){
            ma = 1;
        }
        return newNode(key);
    }
  
    if (key < node->key){
        node->left = insert(node->left, key, ma);
    } else if (key > node->key){
        node->right = insert(node->right, key, ma);
    } else {
        node->c++;
    }

    ma = max(ma, node->c);
    return node;
}
  

void inorder(struct node* root, int s){
    if (root != NULL){
        inorder(root->left, s);
  
        if (root->c > (s / 2)){
            cout << root->key << endl;
        }
  
        inorder(root->right, s);
    }
}


int main(){
    int arr[] = {1, 3, 2, 3, 3, 3, 4, 3, 3, 5};
    int length = sizeof(arr)/sizeof(arr[0]);

    struct node* root = NULL;
    int ma = 0;
  
    for (int i = 0; i < length; i++) {
        root = insert(root, arr[i], ma);
    }
  
    if (ma > (length / 2)){
        inorder(root, length);
    } else {
        cout << "No majority element\n";
    }
    return 0;
}



  
    