/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode *sum = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *backup = sum;
    sum->next = NULL;
    int carry = 0;
    
    int val1,val2;
    while((l1 != NULL) || (l2 != NULL) || carry)
    {
        sum->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        sum = sum->next;    
        val1 = val2 = 0;
        
        if(l1)
            val1 = l1->val;
        if(l2)
            val2 = l2->val;
        sum->val = (val1 + val2 + carry)%10;
        carry = (val1 + val2 + carry)/10;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
        
    }
    
    sum ->next = NULL;
    return backup->next;
}