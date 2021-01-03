/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

   struct ListNode* ptr = head;
   struct ListNode* tmp; 
   int count = 0; 
    
   while(ptr!=NULL){
       count++;
       ptr = ptr -> next;
   }
    
   if (count == n){
       tmp = head;
       head = head->next;
       free(tmp);
   } 
   else{
       count-= n;
       ptr = head; 
       for(int i = 0; i<count-1 ; i++)  
            ptr = ptr->next;
       tmp = ptr->next;
       ptr->next  = tmp->next;
       free(tmp);
    } 
   
    
    return head;
   

}