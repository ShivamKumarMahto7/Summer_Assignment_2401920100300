class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head ;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head ;
        while(curr!=NULL){
            ListNode* fur = curr->next;
            curr->next = prev;
            prev = curr ;
            curr=fur ;

        }
        
        return prev;
    }
};
