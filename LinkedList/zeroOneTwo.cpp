#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->next = NULL;
        this->data = data;
    }
};

void insert(Node* &head,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        return;
    }
    Node* temp = new Node(data);
    head->next = temp;
    head = temp;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl; 
}

Node* sortZOT(Node* &head){
    if(head == NULL)
        return NULL;
    int zeroCount = 0,oneCount = 0,twoCount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(zeroCount!=0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount!=2){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
    
}

Node* sortZOTWithoufDataRep(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* zeroHead = new Node(-1), *oneHead = new Node(-1),*twoHead = new Node(-1);
    Node* zeroTail = zeroHead, *oneTail = oneHead, *twoTail = twoHead;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            zeroTail->next  = temp;
            zeroTail = temp;
        }else if(temp->data == 1){
            oneTail->next = temp;
            oneTail = temp;
        }else if(temp->data == 2){
            twoTail->next = temp;
            twoTail = temp;
        }
        temp = temp->next;
    }
    (oneHead->next!=NULL)?zeroTail->next = oneHead->next:zeroTail->next = twoHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;
    delete zeroHead;
    delete twoHead;
    delete oneHead;
    return head;
}

int main() {
    Node* tail = NULL;
    insert(tail,1);
    Node* head = tail;
    insert(tail,0);
    insert(tail,0);
    insert(tail,1);
    insert(tail,2);
    insert(tail,2);
    display(head);
    Node* ans = sortZOTWithoufDataRep(head);
    display(ans);
    return 0;
}
