#include<iostream>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
};

Node* newNode(int value){
    Node* temp=new Node;
    temp->key=value;
    temp->left=temp->right=NULL;
    return temp;
}

Node* insert(Node* root,int key){
    if(root==NULL){
        return newNode(key);
    }
    if(key<root->key)
    root->left=insert(root->left,key);
    else if(key>root->key)
    root->right=insert(root->right,key);

    return root;
}
bool isBSTU(Node* root,int minVal,int maxVal){
    if(root==NULL)
    return true;

    if(root->key<=minVal||root->key>=maxVal)
    return false;

    return(isBSTU(root->left,minVal,root->key) && isBSTU(root->right,root->key,maxVal));
    }

    bool isBST(Node* root){
        return isBSTU(root,-99999,99999);
    }

    void inorder(Node* root){
        if(root!=NULL){
            inorder(root->left);
            cout<<root->key<<" ";
            inorder(root->right);
        }
    }
int main(){
    Node* root=NULL;
    root=insert(root,50);
     insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout<<"inorder traversal: ";
    inorder(root);

    if(isBST(root))
    cout<<"the given tree is BST";
    else
    cout<<"the given tree is NOT a BST";
    return 0;
}
