#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        this->size = n;
        arr = new int[n];
        front = 0;
        rear = 0;
    }
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is Full"<<endl;
        }else{
            arr[rear] = data; 
            rear++;
        }
    }
    void dequeue(){
        if(front==rear){
            cout<<"Queue is Empty"<<endl;
        }else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    bool isEmpty(){
        if(rear==front) return true;
        else return false;
    }
    int qfront(){
        if(front==rear){
            return -1;
        }else{
            return arr[front];
        }
    }
    int qRear(){
        if(rear==front){
            return -1;
        }else{
            return arr[rear-1];
        }
    }
    int qsize(){
        return size;
    }
};

void display(Queue q){
    for(int i = 0;i<q.qsize();i++){
        cout<<q.qfront()<<" ";
        q.dequeue();
    }
    cout<<endl;
}

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    cout<<q.qfront()<<endl;
    cout<<q.qRear()<<endl;
    display(q);
    return 0;
}
