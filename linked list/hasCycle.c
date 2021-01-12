/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    
    if (head == NULL) return false;
        

    struct ListNode* slower = head;
    struct ListNode* faster = head->next;
    while (slower != faster) {
            
        if (faster == NULL || faster->next == NULL) 
            return false;
            
        slower = slower->next;
        faster = faster->next->next;
    }
    return true;
    
}