#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    tail->next = temp;
    tail = temp;
}

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

Node* findMid(Node* &head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow; 
}

Node* merge(Node* &left, Node* &right){
    if(left == NULL)
        return right;
    if(right == NULL)
        return left;
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }else{
            temp->next = right;
            temp= right;
            right = right->next;
        }
    }
    while(left!=NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right!=NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}

Node* mergeSort(Node* &head){
    if(head == NULL || head->next == NULL)
        return head;
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    Node* result = merge(left,right);
    return result;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main() {
    Node* tail = NULL;
    insert(tail,50);
    Node* head = tail;
    insert(tail,40);
    insert(tail,20);
    insert(tail,30);
    insert(tail,10);
    display(head);
    Node* ans = mergeSort(head);
    display(ans);
    return 0;
}
