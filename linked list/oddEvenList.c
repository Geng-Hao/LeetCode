/*

Example 1:

Input: 1->2->3->4->5->NULL
Output: 1->3->5->2->4->NULL
Example 2:

Input: 2->1->3->5->6->4->7->NULL
Output: 2->3->6->7->1->5->4->NULL



*/



struct ListNode* oddEvenList(struct ListNode* head){
    
    if (head != NULL) {
    
        struct ListNode* odd = head;
        struct ListNode* even = head->next;
        struct ListNode* evenHead = even; 
    
        while (even != NULL && even->next != NULL) {
            odd->next = odd->next->next; 
            even->next = even->next->next; 
            odd = odd->next;
            even = even->next;
        }
        
        odd->next = evenHead; 
    }
    
    return head;

}