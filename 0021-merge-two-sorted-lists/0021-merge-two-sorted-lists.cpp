/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* solve(ListNode* first, ListNode* second) {
        if(first->next==NULL){
            first->next=second;
            return first;
        }
        ListNode* curr1 = first;
        ListNode* next1 = curr1 -> next;   
        ListNode* curr2 = second;
        ListNode* next2 = curr2 -> next;

        while(next1 != NULL && curr2 != NULL) {       
            if( (curr2 -> val >= curr1 -> val ) 
               && ( curr2 -> val <= next1 -> val)) {          
                curr1 -> next = curr2;
                next2=curr2->next;
                curr2 -> next = next1;
                curr1 = curr2;
                curr2 = next2;
            }
            else {  
                curr1=next1;
                next1=next1->next;
                if(next1==NULL){
                    curr1->next=curr2;
                    return first;
                }         
            }        
        }
        return first;
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       
        if(l1 == NULL)
            return l2;

        if(l2 == NULL)
            return l1;

        if(l1 -> val <= l2 -> val ){
             return solve(l1, l2);
        }
        else
        {
            return solve(l2, l1);
        }
    }
};	
   