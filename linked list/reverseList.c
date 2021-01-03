/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    
    struct ListNode* preCurrent = NULL;
    struct ListNode* current = head;
    struct ListNode* newLast;
    
    while(current!=NULL){
        
        newLast = preCurrent;
        preCurrent = current;
        current = current -> next;  
        preCurrent ->next = newLast;
        
    }
    
    head = preCurrent;
    
    return head;
}