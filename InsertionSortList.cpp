/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
 
 void func(ListNode** sorted,ListNode* node)
 {
     ListNode* c;
     if((*sorted)==NULL||(*sorted)->val>=node->val)
     {
         node->next=*sorted;
         *sorted=node;
     }
     else
     {
         c=*sorted;
         while(c->next!=NULL&&c->next->val<node->val)
         c=c->next;
         node->next=c->next;
         c->next=node;
    }
 }
ListNode* Solution::insertionSortList(ListNode* A) {
    if(!A||!A->next)
    return A;
ListNode* sorted=NULL;
ListNode* curr=A;
while(curr)
{
    ListNode* next=curr->next;
    
    func(&sorted,curr);
    curr=next;
    
    
}

    A= sorted;
    
    return A;
}
