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

void insertAtTail(Node* &head, Node* &tail,int data){
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

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

Node* reverseList(Node* &head){
    if(head == NULL)
        return NULL;
    Node* curr = head,*prev = NULL,*fwd = NULL;
    while(curr != NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

Node* add(Node* first,Node* second){
    int carry = 0;
    Node* ansHead = NULL,*ansTail = NULL;
    while(first != NULL && second != NULL){
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

Node* addTwoList(Node* first,Node* second){
    first = reverseList(first);
    second = reverseList(second);
    Node* ans = add(first,second);
    return ans;
}

Node* add2(Node* first,Node* second){
    int carry = 0;
    Node* ansHead = NULL,*ansTail = NULL;
    while(first!=NULL || second!=NULL || carry!=0){
        int val1 = 0;
        if(first!=NULL){
            val1 =first->data;
            first = first->next;
        }
        int val2 = 0;
        if(second!=NULL){
            val2 = second->data;
            second = second->next;
        }
        int sum = val1+val2+carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry =sum/10;
    }
    return ansHead;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);   
    insertAtTail(head,tail,3);
    display(head);
    Node* head1 = NULL;
    Node* tail1 = NULL;
    insertAtTail(head1,tail1,1);
    insertAtTail(head1,tail1,2);
    insertAtTail(head1,tail1,1);
    display(head1);
    // Node* ans = reverseList(head);
    // display(ans);
    Node* sum = addTwoList(head,head1);
    display(sum);
    return 0;
}
