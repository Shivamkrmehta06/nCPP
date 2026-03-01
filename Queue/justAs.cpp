#include <iostream>
using namespace std;

//write a basic Queue implementation
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        this->size=n;
        front = -1;
        rear=-1;
        arr = new int[size];
    }
    void push(int data){
        if(front==rear){
            cout<<"Queue is Full"<<endl;
            return;
        }else{
            front = rear = 0;
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
        }else{
             arr[front] = -1;
            front++;
            if(front==rear){
                front = rear = 0;
            }
        }
    }
    void display(){
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        int i = front;
        while(true){
            cout<<arr[i]<<" ";
            if(i==rear) break;
            i++;
        }
    }
    int size(){
        int count = 0;
        for(int i = front;i<rear;i++){
            count++;
        }
    }
};

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    CircularQueue(int n){
        this->size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    void push(int data){
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
    void pop(){
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
        }
        else{
            front=(front+1)%size;
        }
    }
};

int main() {
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    return 0;
}
