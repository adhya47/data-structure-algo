#include<iostream>
#include<vector>
#include<map>
#include<array>
#include<stack>
#include<string>
#include<deque>
#include<queue>
#include<algorithm>
#include <climits>
using namespace std;

#include <iostream>  // For input/output operations
using namespace std;

// Definition of Node structure
#include <iostream>
using namespace std;

// Definition of Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to insert a node into the BST
Node* creation(Node* root, int &x,int &maxi) {
    if (!root||root->data == maxi) {
        Node* temp=new Node(x);
        return temp;
    }
    if (x < root->data) {
        root->left = creation(root->left, x,maxi);
    } else {
        root->right = creation(root->right, x,maxi);
    }
    return root;
}

// Function to delete a node from BST
// Node* deleteNode(Node* root, int x) {
//     if (!root) return NULL;

//     if (x < root->data) {
//         root->left = deleteNode(root->left, x);
//     } else if (x > root->data) {
//         root->right = deleteNode(root->right, x);
//     } else {
//         // Node found

//         // Case 1: Leaf node
//         if (!root->left && !root->right) {
//             delete root;
//             return NULL;
//         }
//         // Case 2: Node with one child
//         else if (!root->left) {
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         } else if (!root->right) {
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         // Case 3: Node with two children
//         else {
//             Node* temp = root->right;
//             while (temp && temp->left) {
//                 temp = temp->left;
//             }
//             root->data = temp->data;
//             root->right = deleteNode(root->right, temp->data);
//         }
//     }
//     return root;
// }

// Function to print the BST (In-order Traversal)
void print(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
// bool check_bst(Node* root,int &prev){
// if(!root){return 1;}
// check_bst(root->left,prev);
// if(prev>=root->data){
//     return 0;
// }
// prev=root->data;
// return check_bst(root->right,prev);
// }
//minimun dist
// int minimum_dist(Node* root,int &prev,int &ans){
//     if(!root){return 1;}
//     minimum_dist(root->left,prev,ans);
// if(prev!=INT64_MIN){
//     ans=min(ans,root->data-prev,ans);
// }
// prev=root->data;
// minimum_dist(root->right,prev,ans);
// return ans;
// }
// void smallest_element(Node* root,int &sum,int k){
//     if(!root)return;
//     smallest_element(root->left,sum,k);
//     k--;
//     if(k){
//         sum+=root->data;
//     }else{
//         return;
//     }
//     smallest_element(root->right,sum,k);

// }
// Main function
// int main() {
//     int arr[] = {3, 7, 4, 1, 6, 8};
//     Node* root = NULL;
//     for (int i = 0; i < 6; i++) {
//         root = creation(root, arr[i]);  // Corrected function call
//     }

//     cout << "BST In-order before deletion: ";
//     print(root);
//     cout << endl;

//     // Deleting a node
//     int key = 4;
//     root = deleteNode(root, key);

//     cout << "BST In-order after deleting " << key << ": ";
//     print(root);
//     cout << endl;
// int prev=INT_MIN;
// if(check_bst(root,prev)){
//     cout<<true;
// }else{
//     cout<<false;
// }

// int sum=0;
// // int mini=minimum_dist(root,prev,ans);
// // cout<<mini;
// //Sum of kth smallest element
// smallest_element(root,sum,3);
// // cout<<sum;
//     return 0;
// }
int main(){
    int pre[]={8,5,1,7,10,12};
    Node* root = NULL;
    int maxi=INT_MIN;
    for (int i = 0; i < 6; i++) {
       maxi=max(maxi,pre[i]);  // Corrected function call
    }
    for (int i = 0; i < 6; i++) {
         root = creation(root, pre[i],maxi);  // Corrected function call
     }
     print(root);
}