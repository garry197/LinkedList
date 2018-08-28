/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    if(!A||!A->next)
    return A;
    
     ListNode* curr=A;
       ListNode* nex=A->next;
       curr->next=nex->next;
       nex->next=curr;
    ListNode* god=nex;
    ListNode*prev=curr;
    A=A->next;
    
    while(A&&A->next)
    {
        
        curr=A;
        nex=A->next;
       curr->next=nex->next;
       nex->next=curr;
        prev->next=nex;
        A=A->next;
        prev=curr;
    }
    return god;
    
    
    
    
}
