class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp !=NULL){
            temp = temp->next;
            count++;
        }
              if(n==count){
            head=head->next;
            return head;
        }
         ListNode* temp1 = head;
        if(n==1){
            while(temp1->next->next !=NULL){
            temp1 = temp1->next;
        } 
        temp1->next = NULL;
        return head;
        }
       ListNode* curr = temp1;
       ListNode* prev = NULL;
       ListNode* fur = NULL;
       int count1 = 0;
       while(count-count1 != n){
        prev = curr;
        curr = curr->next;
        fur = curr->next ;
        count1++;
       }
        prev->next = fur;
        curr->next= NULL;
        return head;

        
    }
};
