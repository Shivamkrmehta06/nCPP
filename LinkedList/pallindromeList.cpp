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

Node* getMiddle(Node* &head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverseList(Node* &head){
    Node* curr = head,*prev = NULL,*next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPallindrome(Node* &head){
    if(head->next == NULL)
        return true;
    Node* mid = getMiddle(head);
    Node* temp = mid->next;
    mid->next = reverseList(temp);
    Node* head1 = head;
    Node* head2 = mid->next;
    while(head2!=NULL){
        if(head2->data != head1->data)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = mid->next;
    mid->next = reverseList(temp);
    return true;
}

int main() {
    Node* tail = NULL;
    insert(tail,1);
    Node* head = tail;
    insert(tail,2);
    insert(tail,2);
    insert(tail,1);
    //insert(tail,50);
    display(head);
    Node* mid = getMiddle(head);
    cout<<mid->data<<endl;
    Node* prev = reverseList(head);
    display(prev);
    bool ans = isPallindrome(head);
    ans == true?cout<<"Pallindrome"<<endl:cout<<"!Pallindrome"<<endl;
    return 0;
}
