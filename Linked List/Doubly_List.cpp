// Doubly Linked List
#include <iostream>
using namespace std;

class Node{
     public:
        int data;
        Node* prev;
        Node* next;
        //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
void print(Node* head){
    Node* temp= head;
    int len=0;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        len++;
    }
    cout<<endl<<"Length of List:"<<len<<endl;
}
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
void insertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &head,Node* &tail,int position, int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    int cnt=0;
    Node* temp = head;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
}
int main() {
    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    insertAtHead(head,20);
    
    insertAtHead(head,30);
    
    insertAtTail(tail, 40);
    print(head);
    
    insertAtPosition(head,tail,3,25);
    print(head);

    return 0;
}
