#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    struct Node * left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
void postorder(struct Node* root,vector<int>& arr){
    if(root==NULL) return;
    postorder(root->left,arr);
    postorder(root->right,arr);
    arr.push_back(root->data);
}
int main(){
    vector<int> arr;
    Node* root = new Node(4);
    root->left = new Node(6);
    root->right = new Node(5);
    root->left->right = new Node(2);
    root->left->left = new Node(3);
    postorder(root,arr);
    cout<<"postorder Traversal is : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}