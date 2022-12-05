// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }//Destructor
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
           this -> next = NULL;
        }
        cout<< "Memory is free for node with data:"<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void InserAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void InsertAtPosition(Node* &head, Node* &tail, int position, int d){
    //Insert At Head
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    if(temp->next == NULL){
        InserAtTail(tail,d);
        return;
    } 
}
void deleteNode(int position, Node* &head){
    //deleting start of node
    if(position==1){
        Node* temp = head;
        head = head -> next;
        //memory free start node 
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    // Write C++ code here
    InsertAtHead(head, 30);
    
    InserAtTail(tail,20);
    printList(head);
    
    InsertAtPosition(head,tail,1,22);
    printList(head);
    
    deleteNode(2,head);
    printList(head);
    

    return 0;
}
