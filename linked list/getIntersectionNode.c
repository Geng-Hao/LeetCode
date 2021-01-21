/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    struct ListNode* ptrA = headA;
    struct ListNode* ptrB = headB; 
    
    
    while(ptrA != ptrB){
        
        if(ptrA!=NULL)
            ptrA = ptrA->next;
        else
            ptrA = headB;
        
        if(ptrB!=NULL)
            ptrB = ptrB->next;
        else
            ptrB = headA;
    }
    return ptrA;
    
    
}