// GfG question
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    if(!root) return ans;
    queue<Node*> q;
    q.push(root);
    ans.push_back(root->data);
    while(!q.empty()){
        Node * p=q.front();
        q.pop();
        if(p->right){
            ans.push_back(p->right->data);
            q.push(p->right);
        }
        if(p->left){
            ans.push_back(p->left->data);
            q.push(p->left);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
