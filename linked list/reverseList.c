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

struct ListNode* reverseList(struct ListNode* head){
    
  if(head == NULL || head->next == NULL) return head; // 0 or 1 node case

  struct ListNode* p = reverseList(head->next); // p is the new head of the reversed linked list
  (head->next)->next = head; // original head becomes the tail of the reversed linked list
  head->next = NULL;  // the next of the tail is pointed to the NULL
    
  return p;  
    
}