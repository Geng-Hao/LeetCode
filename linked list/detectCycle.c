/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    
    if (head == NULL || head->next == NULL) return NULL;
    
    struct ListNode* slower = head;
    struct ListNode* faster = head;
    bool isCycle = false;
    
    while(slower != NULL && faster != NULL) {
        slower = slower->next;
        
        if (faster->next == NULL) return NULL;
        
        faster = faster->next->next;
        
        if (slower == faster) { 
            isCycle = true; 
            break; 
        }
    }
    
    if(!isCycle) return NULL;
    
    slower = head;
    
    while( slower != faster) {
        slower = slower->next;
        faster = faster->next;
    }

    return slower;
    
    
}