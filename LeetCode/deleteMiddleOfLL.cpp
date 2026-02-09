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

Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

void deleteMiddleNode(Node* &head){
    if(head == NULL)
        return;
    Node* curr = head,*prev = NULL,*fwd = NULL;
    Node* mid = getMid(head);
    while(curr!=mid){
        fwd = curr->next;
        prev = curr;
        curr = fwd;
    }
    fwd = fwd->next;
    Node* nod = curr;
    prev->next = fwd;
    nod->next = NULL;
    
    delete nod;
    cout<<fwd->data<<" "<<curr->data<<" "<<prev->data<<endl;
}

Node* deleteMid(Node* &head){
    if(head == NULL || head->next == NULL)
        return NULL;
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        fast = fast->next->next;
        slow= slow->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
    
}

int main() {
    Node* tail = NULL;
    insert(tail,10);
    Node* head = tail;
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    insert(tail,50);
    display(head);
    Node* ans = deleteMid(head);
    display(ans);
    return 0;
}
