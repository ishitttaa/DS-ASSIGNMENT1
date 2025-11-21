#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node *parent;
};
Node* newNode(int item){
    Node *temp=new Node;
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
Node* insert(Node* node,int key) {
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
//search
Node* search(Node* root,int key){
    while(root!=NULL && root->key!=key){
        if(key<root->key){
            root=root->left;
        }
        else
        root=root->right;
    }
    return root;
}
//max
Node* Max(Node* node){
    if(node==NULL)
    return NULL;
    while(node->right!=NULL){
        node=node->right;
    }
    return node;
}
//min
Node* Min(Node* node){
    if(node==NULL)
    return NULL;
    while(node->left!=NULL){
        node=node->left;
    }
    return node;
}
//inorder successor
Node* inorderSuccessor(Node* node){
    if(node==NULL)
    return NULL;
    
    if(node->right!=NULL){
        return Min(node->right);
    }

    Node* p=node->parent;
    while(p!=NULL && node==p->right){
        node=p;
        p=p->parent;
    }
    return p;
}
Node* inorderPredecessor(Node* node){
    if(node==NULL)
    return NULL;

    if(node->left!=NULL)
    return Max(node->left);

    Node* p=node->parent;
   while(p!=NULL && node==p->left) {
    node=p;
    p=p->parent;

    }
    return p;
}
int main(){
    Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,70);
    insert(root,80);

    cout<<"Inorder traversal:";
    inorder(root);

    //search
    int key=40;
    Node* rec=search(root,key);
    cout<<"recursive search:"<<key<<":"<<(rec?"Found":"Not Found");
cout<<endl;
    cout<<"Minimum element:"<<Min(root)->key;
    cout<<endl;
     cout<<"Maximum element:"<<Max(root)->key;
     cout<<endl;
    Node* node=search(root,50);
     Node* succ=inorderSuccessor(node);
     if(succ)
     cout<<"inorder successor of"<<node->key<<":" << succ->key;
     else
     cout<<"inorder successsor of"<<node->key<<":" <<"doesn't exist";
     cout<<endl;
     Node* pred=inorderPredecessor(node);
     if(pred)
     cout<<"inorder predecessor of"<<node->key<<":"<<pred->key;
     else
     cout<<"inorder predecesssor of"<<node->key<<":"<<"doesn't exist";
cout<<endl;
     return 0;
}
