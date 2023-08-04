/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* floydDetectLoop(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode* slow=head,*fast=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL) fast=fast->next;
            slow=slow->next;
            if(slow==fast) return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* intersection = floydDetectLoop(head);
        if(intersection==NULL) return NULL;
        ListNode* slow=head;
        while(slow!=intersection){
            intersection=intersection->next;
            slow=slow->next;
        }
        return slow;
    }
};