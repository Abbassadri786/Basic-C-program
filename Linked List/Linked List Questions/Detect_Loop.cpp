class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* High = head;
        Node* Low = head;
        
        while(High != NULL && High->next != NULL){
            Low = Low->next;
            High = High->next->next;
            if(High==Low){
                return true;
            }
        }
        return false;
        
        
    }
};
