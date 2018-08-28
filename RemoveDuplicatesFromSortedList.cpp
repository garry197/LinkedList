/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL)
    return NULL;

    ListNode* t=A;
    ListNode* temp=A->next;
    if(temp==NULL)
    return A;
    while(temp!=NULL)
    {
        if(temp==NULL)
        break;
        if(A->val==temp->val)
        {A->next=temp->next;
        temp=temp->next;}
        else
        {A=temp;
        temp=temp->next;};
    }return t;

}
