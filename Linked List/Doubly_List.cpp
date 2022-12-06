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
    Node* temp = head;
    temp -> next = head;
    head -> prev = temp;
}
int main() {
    Node* node1= new Node(10);
    node1 = head;


    return 0;
}
