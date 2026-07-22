#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int num){
        data=num;
        left=right=nullptr;
    }
};

int count(Node * root){
    if(root==nullptr) return 0;
    return count(root->left)+count(root->right)+1;
};

int height(Node *root){
    if(root->left == nullptr && root->right == nullptr) return 0;
    if(root == nullptr) return 0;
    return max(height(root->left),height(root->right))+1;
};

void preorder(Node *root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};

void postorder(Node *root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
};

void inorder(Node *root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
};

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(25);
    root->left->right = new Node(27);
    root->right->left = new Node(35);
    root->right->right = new Node(40);
    cout<<"Total node of Tree: "<<count(root)<<endl;
    cout<<"Height of Tree: "<<height(root)<<endl;
    cout<<"Pre-order of tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Post-order of tree: ";
    postorder(root);
    cout<<endl;
    cout<<"In-order of tree: ";
    inorder(root);
    return 0;
}