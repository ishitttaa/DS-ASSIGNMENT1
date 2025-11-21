#include<iostream>
using namespace std;
#define MAX 100
class PriorityQueue{
    int heap[MAX];
    int size;

    void heapifyDown(int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<size && heap[left]>heap[largest])
        largest=left;

        if(right<size && heap[right]>heap[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(heap[i],heap[largest]);
            heapifyDown(largest);
        }
    }
    //maintain heap property after insertion
    void heapifyUp(int i){
     int parent=(i-1)/2;
     if(i>0 && heap[i]>heap[parent]){
        swap(heap[i],heap[parent]);
        heapifyUp(parent);
     }
    }
    public:
    PriorityQueue(){
        size=0;
    }
    //insert element
    void push(int value){
        if(size==MAX){
            cout<<"priority queue overflow";
            return;
        }
        heap[size]=value;
        size++;
        heapifyUp(size-1);
    }
    //delete highest priority element
    void pop(){
        if(size<=0){
            cout<<"priority queue underflow";
            return;
        }
        cout<<"Removing "<<heap[0]<<":";
        heap[0]=heap[size-1];
        size--;
        heapifyDown(0);
        cout<<endl;
    }
    //get highest priority element
    int top(){
        if(size<=0){
            cout<<"priority queue is empty!";
            return -1;
        }
        return heap[0];
        cout<<endl;
    }
    //display heap
    void display(){
        if(size==0){
            cout<<"priority queue is empty!";
            return;
        }
        cout<<"priority queue(max-heap)";
        for(int i=0;i<size;i++)
        cout<<heap[i]<<" ";
    }
    bool empty(){
        return size==0;
    }
};
int main(){
    PriorityQueue pq;
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(40);
    cout<<endl;
    pq.display();
    cout<<endl;
    cout<<"highest priority elerment: "<<pq.top();
    cout<<endl;
    pq.pop();
    pq.display();
    cout<<endl;
    cout<<"highest priority element: "<<pq.top();
    return 0;
}
