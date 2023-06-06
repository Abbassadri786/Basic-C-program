// Convert to Sum Tree
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
  int data;
  TreeNode* left;
  TreeNode* right;
  
  TreeNode(int data){
      this -> data = data;
      left = NULL;
      right = NULL;
  }
};
int convert_Into_Sum_Tree(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    
    int leftAns = convert_Into_Sum_Tree(root -> left);
    int rightAns = convert_Into_Sum_Tree(root -> right);
    
    root -> data = leftAns + root->data + rightAns;
    
    return root -> data;
}
