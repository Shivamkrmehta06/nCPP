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

Node* reverseList(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;
    while(curr != NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

Node* add(Node* first,Node* second);

Node* addTwoLists(Node* first,Node* second){
    first = reverseList(first);
    second = reverseList(second);
    Node* ans = add(first,second);
    return ans;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }else{
        tail->next = temp;
        tail = temp;
    }
}

Node* add(Node* first,Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first!=NULL && second!=NULL){
        int sum = carry+first->data+second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
        second = second->next;
    }
    while(second!=NULL){
        int sum = carry+second->data;
        int digit = sum%10;
        carry = sum/10;
        second = second->next;
    }
    while(carry!=0){
        int sum = carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }
    return reverseList(ansHead);
}

Node* add2(Node* first,Node* second){
    int carry = 0;
    Node* ansTail = NULL;
    Node* ansHead = NULL;
    while(first!=NULL || second!=NULL || carry!=0){
        int val1 = 0;
        if(first != NULL){
            val1 = first->data;
            first = first->next;
        }
        int val2 = 0;
        if(second != NULL){
            val2 = second->data;
            second = second->next;
        }
        int sum = val1+val2+carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }
    return ansHead;
}

int main() {
    Node* tail = NULL;
    insert(tail,1);
    Node* head = tail;
    insert(tail,8);
    Node* tail2 = NULL;
    insert(tail2,2);
    Node* head2 = tail2;
    insert(tail2,3);
    display(head);
    display(head2);
    Node* ans = add2(reverseList(head),reverseList(head2));
    display(reverseList(ans));
    return 0;
}
