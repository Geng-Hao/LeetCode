/*
Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Example 2:
Input: head = []
Output: []

Example 3:
Input: head = [1]
Output: [1] */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    
    if(head == NULL || head->next == NULL) return head;
    
    struct ListNode* p = swapPairs(head->next->next);
    
    struct ListNode* tmp = head->next ;
    head->next = p;
    tmp->next = head;
    
    return tmp;
    
    

}