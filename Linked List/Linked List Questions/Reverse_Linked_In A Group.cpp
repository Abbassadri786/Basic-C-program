class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* curr = head;
        node* prev = NULL;
        node* forward;
        int c=0;
        
        while(curr!=NULL && c<k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            c++;
        }
        if(forward!=NULL){
            head->next = reverse(forward,k);
        }
        return prev;
    }
};
