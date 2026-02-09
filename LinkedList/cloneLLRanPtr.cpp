// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->next = NULL;
//         this->data = data;
//     }
// };

// void insert(Node* &head,int data){
//     if(head == NULL){
//         Node* temp = new Node(data);
//         head = temp;
//         return;
//     }
//     Node* temp = new Node(data);
//     head->next = temp;
//     head = temp;
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl; 
// }

// void insertAtTail(Node* &head,Node* &tail,int data){
//     Node* temp = new Node(data);
//     if(head == NULL){
//         head = temp;
//         tail = temp;
//         return;
//     }
//     else{
//         tail->next = temp;
//         tail = temp;
//     }
// }

// Node* copyList(Node* &head){
//     Node* cloneHead = NULL,*cloneTail = NULL,*temp = head;
//     while(temp!=NULL){
//         insertAtTail(cloneHead,cloneTail,temp->data);
//         temp = temp->next;
//     }
//     unordered_map<Node*,Node*> oldToNewNode;
//     Node* originalNode = head;
//     Node* cloneNode = cloneHead;
//     while(originalNode!=)
// }

// int main() {
    
//     return 0;
// }
