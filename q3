#include<iostream>
using namespace std;

class DoublyLinkedlist{
    private:

struct Node {
    int data;
    Node* next;
    Node* prev;
};
//doubly ll
Node* head = NULL;
public:
DoublyLinkedlist()
void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        Node* tail = head->prev;  

        tail->next = newNode;    
        newNode->prev = tail;

        newNode->next = head;   
        head->prev = newNode;
    }
}

int size() {
    if (head == NULL) {
        cout << "List size is 0\n";
        return 0;
    }

    int count = 1;
    Node* temp = head->next;
    while (temp != head) {
        count++;
        temp = temp->next;
    }
    cout << "List size is " << count << "\n";
    return count;
}
};
class CircularLinkedlist{
    private:
//circular ll
struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
public:
CircularLinkedlist()
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
        int size(){
           
            Node* temp=head->next;
            if(head==NULL){
                cout<<"list of size 0";
                return 0 ;
            }
             int count=1;
            do{
                count++;
                temp=temp->next;
            }
        while(temp!=head);
        cout << "List size is " << count ;
        return count;
        }
};
int main(){
    DoublyLinkedlist dll;
    dll.insert(20);
    dll.insert(100);
    dll.insert(40);
    dll.insert(80);
    dll.insert(60);
    cout<<"doubly linkedlist size"<<dll.size();
    return 0;
}
