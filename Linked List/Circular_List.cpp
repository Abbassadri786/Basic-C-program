// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  //constructor
  Node(int d){
      this -> data = d;
      this ->next = NULL;
  }//Destructor
  ~Node(){
      int value = this->data;
      while(this->next != NULL){
          next = NULL;
          delete next;
      }
  }
};
void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    //Non-empty list
    else{
        Node* curr = tail;
        while(curr->data!=element){
            curr = curr->next;
        }
        //Now element is found
        Node* temp = new Node(d);
        temp -> next = curr->next;
        curr -> next = temp;
    }
}
void print(Node* &tail){
    Node* temp = tail;
    
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
}
void deleteNode(Node* &tail, int value){
    //for Empty Case
    if(tail==NULL){
        cout<<"List is empty,Please check again"<<endl;
    }
    //for non-empty case
    else{
        Node* prev=tail;
        Node* curr = prev-> next;
        while(curr->data != value){
            prev = curr;
            curr= curr->next;
        }
        prev->next = curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;//memory is freed.
    }
}
int main() {
    Node* tail = NULL;
    
    insertNode(tail,0,1);
    print(tail);
    insertNode(tail,1,2);
    print(tail);
    insertNode(tail,2,4);
    print(tail);
    insertNode(tail,3,6);
    print(tail);
    
    

    return 0;
}
