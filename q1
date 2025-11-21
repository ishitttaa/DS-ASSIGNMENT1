#include<iostream>
using  namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
};
Node* newNode(int item){
    Node* temp=new Node;
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
void preorder(Node* root){
    if (root==NULL)
    return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if (root==NULL)
    return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if (root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
     cout<<root->key<<" ";
}
int main(){
    Node* root=newNode(50);
    root->left = newNode(30);
    root->right = newNode(60);
    root->left->right = newNode(40);

    cout << "Pre-order traversal: ";
    preorder(root);
    cout << "\nIn-order traversal: ";
    inorder(root);
    cout << "\nPost-order traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
