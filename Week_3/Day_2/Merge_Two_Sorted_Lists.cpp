class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* dummy = new ListNode(0);
        ListNode* tempFinal = dummy;
        while(temp1!=NULL && temp2!=NULL)
           {
          if(temp1->val <= temp2->val)
             {
                tempFinal->next = temp1;
                temp1 = temp1->next;
            }else{
                tempFinal->next = temp2;
                temp2 = temp2->next;
            }
             tempFinal = tempFinal->next;
        }
        if(temp1!=NULL){
                tempFinal->next = temp1;  
             }
        else{
                tempFinal->next = temp2;   
              }
        return dummy->next ;
    }
};
