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

Node* solve(Node* first, Node* second){
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;
    while(next1 != NULL && curr2 != NULL){
        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

//Merge two sorted linked list
Node* sortTwoList(Node* first, Node* second){
    if(first == NULL)
        return second;
    else if(second == NULL)
        return first;
    else if(first->data <= second->data)
        return solve(first,second);
    else
        return solve(second,first);
}

int main() {
    Node* tail1 = NULL;
    insert(tail1,10);
    Node* head1 = tail1;    
    insert(tail1,20);
    insert(tail1,30);
    Node* tail2 = NULL;
    insert(tail2,40);
    Node* head2 = tail2;
    insert(tail2,50);
    insert(tail2,60);
    display(head1);
    display(head2);
    Node* ans = sortTwoList(head1,head2);
    display(ans);
    return 0;
}
