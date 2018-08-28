/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {

   if(!A||!A->next)
 return A;


   ListNode *back=new ListNode(0);
   back->next=A;
    ListNode* prev=back;
    ListNode* curr=A;
    if(curr==NULL)
    return A;


   while(curr)
    {

        while(curr->next&&curr->val==curr->next->val)
        curr=curr->next;

        if(prev->next==curr)
           prev=prev->next;
        else
        prev->next=curr->next;
         curr=curr->next;
    }
    return back->next;


}
