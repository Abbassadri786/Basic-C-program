// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data to insert at Left: "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data to insert at Right: "<<data<<endl;
    root->right = buildTree(root->right); 
    
    return root;
}

void print(node* root)
{
    if (root == NULL)
        return ;
    print(root -> left);
    cout << root -> data << " ";
    print (root -> right);
}
int main() {
    node* root = NULL;
    root = buildTree(root);
    print(root);
    return 0;
}
