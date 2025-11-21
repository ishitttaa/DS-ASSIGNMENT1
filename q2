#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
void insert(int value){
    Node* newNode=new Node();
    newNode->data=value;
    if(head==NULL){
        head=newNode;
        head->next=head;
         }
         else{
             Node* temp=head;
             while(temp->next!=head){
                 temp=temp->next;
             }
             temp->next=newNode;
                 newNode->next=head;
         }
}
         void display(){
             if(head==NULL){
                 cout<<"list is empty";
                 return;
             }
             Node* temp=head;
             do{
                 cout<<temp->data<<" ";
                 temp=temp->next;
             }while(temp!=head);
        
         cout<<head->data<<" ";
}
int main(){
    insert(20);
    insert(100);
    insert(40);
    insert(80);
    insert(60);
    display();
    return 0;
}
