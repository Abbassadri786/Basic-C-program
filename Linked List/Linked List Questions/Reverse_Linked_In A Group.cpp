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
        // We still have nodes to reverse
        // Aage ke groups ka head forward he
        if(forward!=NULL){
            head->next = reverse(forward,k);
        }
        return prev;
    }
};
