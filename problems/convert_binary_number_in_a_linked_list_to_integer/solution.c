/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    
    int val = 0;
    while(head)
    {
        val = val << 1;
        val |= head->val;
        head = head->next;
    }
    return val;
}