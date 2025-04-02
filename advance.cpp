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

// #include <iostream>  // For input/output operations
// using namespace std;

// // Definition of Node structure
// #include <iostream>
// using namespace std;

// // Definition of Node structure
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

// // Function to insert a node into the BST
// Node* creation(Node* root, int &x,int &maxi) {
//     if (!root||root->data == maxi) {
//         Node* temp=new Node(x);
//         return temp;
//     }
//     if (x < root->data) {
//         root->left = creation(root->left, x,maxi);
//     } else {
//         root->right = creation(root->right, x,maxi);
//     }
//     return root;
// }

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
// void print(Node* root) {
//     if (!root) return;
//     cout << root->data << " ";
//     print(root->left);
//     print(root->right);
// }
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
// int main(){
//     int pre[]={8,5,1,7,10,12};
//     Node* root = NULL;
//     int maxi=INT_MIN;
//     for (int i = 0; i < 6; i++) {
//        maxi=max(maxi,pre[i]);  // Corrected function call
//     }
//     for (int i = 0; i < 6; i++) {
//          root = creation(root, pre[i],maxi);  // Corrected function call
//      }
//      print(root);
// }
//binary search trees
// int height(Node* root) {
//     if (!root) return 0;
    
//     queue<Node*> q;
//     q.push(root);
//     int height = 0;
    
//     while (!q.empty()) {
//         int size = q.size();
//         for (int i = 0; i < size; i++) {
//             Node* node = q.front();
//             q.pop();
//             if (node->left) q.push(node->left);
//             if (node->right) q.push(node->right);
//         }
//         height++;
//     }
//     return height;
// }
// void sunset(int arr[],int n,int index,vector<vector<int>>& ans,vector<int>& temp){
//     if(index==n){
//         ans.push_back(temp);
//         return;
//     }
//     sunset(arr,n,index+1,ans,temp);
//     // sum+=arr[index];
//     temp.push_back(arr[index]);
// if(index<n && arr[index]==arr[index+1]){
//     index++;
// }
//     sunset(arr,n,index+1,ans,temp);
//     // sum=0;
//     temp.pop_back();
// }
// // int main(){
// //     int arr[]={2, 2};
// //     int n=2;
// //     int index=0;
// //     vector<vector<int>>ans;
// //     vector<int>temp;
// //     // int sum=0;
// //     sunset(arr,n,index,ans,temp);
// //    for(int i=0;i<ans.size();i++){
// //     for(int j=0;i<arr[0].size();i++){
// //         cout<<arr[i][j]<<endl;
// //     }
// //    }
// // }
// int main() {
//     vector<int> arr = {2, 2};  // Convert array to vector
//     int n = 2;
//     int index = 0;
//     vector<vector<int>> ans;
//     vector<int> temp;

//     sort(arr.begin(), arr.end()); // Sort to handle duplicates
//     sunset(arr, n, index, ans, temp);

//     // Printing the subsets
//     cout << "Subsets:\n";
//     for (int i = 0; i < ans.size(); i++) {
//         cout << "[";
//         for (int j = 0; j < ans[i].size(); j++) {
//             cout << ans[i][j];
//             if (j < ans[i].size() - 1) cout << ", ";
//         }
//         cout << "]\n";
//     }}
// void sunset(vector<int>& arr, int n, int index, vector<vector<int>>& ans, vector<int>& temp) {
//     if (index == n) {
//         ans.push_back(temp);
//         return;
//     }

//     // **Include the current element**
    
//     sunset(arr, n, index + 1, ans, temp);
//     temp.push_back(arr[index]);
//     // **Skip all duplicate elements**
//     while (index < n && arr[index] == arr[index + 1]) {
//         index++;
//     }

//     // **Exclude the current element**
//     sunset(arr, n, index + 1, ans, temp);
//     temp.pop_back(); // **Backtrack**
// }
// void sunset(vector<int>& arr, int n, int index, vector<vector<int>>& ans, vector<int>& temp) {
//     if (index == n) {
//         ans.push_back(temp);
//         return;
//     }

//     // **Exclude the current element**
//     sunset(arr, n, index + 1, ans, temp);

//     // **Include the current element**
//     temp.push_back(arr[index]);

//     // **Fix: Skip all duplicate elements**
//     while (index + 1 < n && arr[index] == arr[index + 1]) {
//         index++;
//     }

//     sunset(arr, n, index + 1, ans, temp);
//     temp.pop_back(); // **Backtrack**
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sunset(vector<int>& arr, int n, int index, vector<vector<int>>& ans, vector<int>& temp) {
//     if (index == n) {
//         ans.push_back(temp);
//         return;
//     }

//     // **Exclude the current element**
//     sunset(arr, n, index + 1, ans, temp);

//     // **Include the current element**
//     temp.push_back(arr[index]);
//     sunset(arr, n, index + 1, ans, temp);
//     temp.pop_back(); // **Backtrack**

//     // **Skip duplicates after including the current element**
//     while (index + 1 < n && arr[index] == arr[index + 1]) {
//         index++;
//     }


// void sunset(vector<int>& arr, int n, int index, vector<vector<int>>& ans, vector<int>& temp) {
//     if (index == n) {
//         ans.push_back(temp);
//         return;
//     }

//     // Include the current element
//     temp.push_back(arr[index]);
//     sunset(arr, n, index + 1, ans, temp);
//     temp.pop_back(); // Backtrack

//     // Skip duplicates before excluding
//     while (index + 1 < n && arr[index] == arr[index + 1]) {
//         index++;
//     }

//     // Exclude the current element (and all its duplicates)
//     sunset(arr, n, index + 1, ans, temp);
// }

//  int main() {
//         vector<int> arr = {2, 2}; // Using vector instead of array
//         int n = 2;
//         int index = 0;
//         vector<vector<int>> ans;
//         vector<int> temp;
    
//         sort(arr.begin(), arr.end()); // **Sorting to handle duplicates**
//         sunset(arr, n, index, ans, temp);
    
//         // **Printing the subsets**
//         cout << "Subsets:\n";
//         for (int i = 0; i < ans.size(); i++) {
//             cout << "[";
//             for (int j = 0; j < ans[i].size(); j++) {
//                 cout << ans[i][j];
//                 if (j < ans[i].size() - 1) cout << ", ";
//             }
//             cout << "]\n";
//         }
    
//         return 0;
//     }
// int main() {
//     vector<int> v = {1, 4, 7, 8, 5};  // Initializing a vector with values

//     // Using a range-based for loop to print the elements
//     for (auto nums : v) {
//         cout << nums << " ";
//     }
//     cout << endl;  // Printing a newline after the loop

//     return 0;
// }
int main(){
    int arr[]={7,1,4,2,5};
    int n=5;
    int count=0;
    int start=0;
    while(start<n){
        if(arr[0]>arr[n-1]){
            if(arr[start]<arr[start+1]){
                start++;
            }else{
     count+=1;
     start++;
            }
        }else{
                if(arr[start]<arr[start+1]){
                    start++;
                }else{
         count+=1;start++;
                }
    }
  
}
if(count>1){
    cout<<"false";
}else{
    cout<<"true";
}
}