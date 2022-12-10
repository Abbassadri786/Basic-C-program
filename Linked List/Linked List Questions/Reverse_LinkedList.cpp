#include <bits/stdc++.h> 

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };



Node* reverseLinkedList(Node* &head)
{
    // Write your code here
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    
}

