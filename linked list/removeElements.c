
/*
Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    
    if(head == NULL) return head;
    
    struct ListNode* newHead = malloc(sizeof(struct ListNode));
    newHead->next = head;
    
    struct ListNode* ptr = newHead;
    
    
    while(ptr!= NULL){
        
        if(ptr->next!=NULL && ptr->next->val == val) {  
            struct ListNode* tmp = ptr->next;
            ptr->next = tmp->next;
            free(tmp);
        }
        else
            ptr = ptr->next;
    }
    
    head = newHead->next;
    
    return head;

}


struct ListNode* removeElements(struct ListNode* head, int val){
    
    if (head == NULL) return NULL;
    head->next = removeElements(head->next, val);
        
    if(head->val == val) 
        return head->next;
    else
        return head;
    
}