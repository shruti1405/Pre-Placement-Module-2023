class Solution 
{   public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
    ListNode dummy(0, head);
    ListNode *previous = &dummy, *current = head;
    
    while(current) 
    {
        ListNode *next_node = current->next;
        while(next_node && current->val == next_node->val) 
        {
            ListNode *temp = next_node->next;
            delete next_node;
            next_node = temp;
        }
        
        if(current->next == next_node) 
        {
            previous = current;
        } else {
            previous->next = next_node;
            delete current;
        }
        current =  next_node;
    }
    
    return dummy.next;
    }
};