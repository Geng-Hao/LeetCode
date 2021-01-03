/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    
    struct ListNode* faster = head;
    struct ListNode* slower = head;
    

    while(faster != NULL && faster->next != NULL){
        faster = faster ->next->next;
        slower = slower -> next;     
    } 
    // now ptr_slower is pointed to the middle of the list 
    
    /*reverse the second half of the linked list*/
    
    struct ListNode* newLast;
    struct ListNode* preSlower= NULL ;
    
    while(slower != NULL){
        newLast = preSlower;
        preSlower = slower;
        slower = slower ->next;
        preSlower ->next = newLast;       
    }
    
    //Compare
    
    faster = head;
    
    while(preSlower != NULL){
        
        if(preSlower ->val != faster ->val)
            return false;
        
        
        preSlower = preSlower -> next;
        faster = faster -> next;
        
        
    }
    
    return true;
}