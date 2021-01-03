**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    
    struct ListNode* faster = head;
    struct ListNode* slower = head;
    

    while(faster->next != NULL && faster != NULL){
        faster = faster ->next->next;
        slower = slower -> next;     
    } 
    // now ptr_slower is pointed to the middle of the list 
    
    /*reverse the second half of the linked list*/
    
    struct ListNode* tmp = NULL;
    struct ListNode* slower_next= slower -> next ;
    
    while(ptr_slower){
        
        
        
    }
    
    

}