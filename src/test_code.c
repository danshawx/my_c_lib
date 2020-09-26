/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    int carray = 0;
    int x = 0;
    int y = 0;
    int result = 0;
    struct ListNode* p_newhead = NULL;
    struct ListNode* p_newlist = NULL;
    struct ListNode* p_pre = NULL;

    while ((NULL != l1) && (NULL != l2))
    {
        if (NULL == l1)
        {
            x = 0;
        }
        else
        {
            x = l1->val;
        }
        if (NULL == l2)
        {
            y = 0;
        }
        else
        {
            y = l2->val;
        }
        result = (x + y + carray) % 10;
        carray = (x + y) / 10;

        if (NULL == p_newhead) // list-head
        {
            p_newhead = (struct ListNode* )malloc(sizeof(struct ListNode));
            p_newhead->val = result;
            p_pre = p_newhead;
        }
        else
        {
            p_newlist = (struct ListNode* )malloc(sizeof(struct ListNode));
            p_newlist->val = result;
            p_pre->next = p_newlist;
            p_pre = p_newlist;
        }

        if (NULL != l1->next)
            l1 = l1->next;
        else
            l1 = NULL;
        if (NULL != l2->next)
            l2 = l2->next;
        else
            l2 = NULL;
    }
    return p_newhead;
}
