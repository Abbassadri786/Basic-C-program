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
void InsertAtMiddle()
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    // Write C++ code here
    InsertAtHead(head, 30);
    InserAtTail(tail,20);
    printList(head);
       

    return 0;
}
