class Solution {
public:
ListNode* reverseLL(ListNode* head){
    
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr){
        ListNode* forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr= forw;
    }
    return prev;
    
}
ListNode* getmid(ListNode* head){
    ListNode* slow= head;
    ListNode* fast= head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow ;

}
int length(ListNode* head){
    int n =0;
    ListNode* temp = head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
    bool isPalindrome(ListNode* head) {
        int len = length(head);
        ListNode* mid = getmid(head);
        ListNode* finalmid = NULL;
        if(len&1){
            finalmid = mid->next;
        }else{
            finalmid = mid;
        }
        finalmid = reverseLL(finalmid);
        ListNode* temp = head;
        while(temp!=NULL && finalmid!=NULL){
            if(temp->val!=finalmid->val){
                return false;
            }
            temp=temp->next;
            finalmid = finalmid->next;
        }
        return true ;
        
    }
};
