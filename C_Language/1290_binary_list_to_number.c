/**
 * Given head which is a reference node to a singly-linked list. 
 * The value of each node in the linked list is either 0 or 1. 
 * The linked list holds the binary representation of a number.
 * Return the decimal value of the number in the linked list.
 ************************************************************************/

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