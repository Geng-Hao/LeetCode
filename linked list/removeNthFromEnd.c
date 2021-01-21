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

struct ListNode* removeNthFromEnd(struct ListNode* head,int n){
    
    if (!head) return NULL;

    struct ListNode* new_head = malloc(sizeof(struct ListNode)); //dummy head
    new_head->next = head;

    struct ListNode* slower = new_head; 
    struct ListNode* faster = new_head;

    for (int i = 0; i < n; i++)
        faster = faster->next;

    while (faster->next!=NULL){
        faster = faster->next;
        slower = slower->next;
    }

    struct ListNode* to_be_deleted = slower->next;
    slower->next = slower->next->next;
    
    free(to_be_deleted);

    return new_head->next;
    
    
    
}