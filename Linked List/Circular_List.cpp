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
          delete next;
          next = NULL;
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
int main() {
    Node* tail = NULL;
    
    insertNode(tail ,5,3);
    print(tail);
    
    

    return 0;
}
