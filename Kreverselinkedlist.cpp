/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    
    ListNode* curr=A;
    ListNode* prev=NULL;
    ListNode* next=NULL;
    int i=0;
    while(curr!=NULL&&i<B)
    {
        next=curr->next;
        
        curr->next=prev;
        prev=curr;
        curr=next;
        i++;
        
    }
    
    
    if(curr!=NULL)
    A->next=reverseList(curr,B);
    
    return prev;
    
    
    
    
    
    
}
