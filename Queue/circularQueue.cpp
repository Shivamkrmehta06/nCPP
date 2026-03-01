#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        this->size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int data){
       if((rear+1)%size==front){
        cout<<"Queue is Full"<<endl;
        return;
       }
       if(front==-1){
            front = rear = 0;
       }else{
            rear = (rear+1)%size;
       }
       arr[rear] = data;
    }
    void dequeue(){
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        if(front==rear){
            front = rear =-1;
        }else{
            front = (front+1)%size;
        }
    }
    int qFront(){
        if(front==-1){
            return -1;
        }else{
            return arr[front];
        }
    }
    int qRear(){
        if(rear==-1){
            return -1;
        }else{
            return arr[rear];
        }
    }
    int qsize(){
        return (rear - front + size) % size + 1;
    }
    void display(){
        if(front == -1){
            cout<<"Queue is Empty"<<endl;
        }
        int i = front;
        while(true){
            cout<<arr[i]<<" ";
            if(i==rear) break;
            i = (i+1)%size;
        }cout<<endl;
    }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.qFront()<<endl;
    cout<<q.qRear()<<endl;
    cout<<q.qsize()<<endl;
    q.display();
}