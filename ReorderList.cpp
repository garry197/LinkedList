/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode* mid(ListNode* head)
 {
     ListNode* slow=head;
     ListNode* fast=head->next;
     
     
     while(fast&&fast->next)
     {
         slow=slow->next;
         fast=fast->next->next;
         }
         
         return slow;
 }
 
 
 ListNode* reverse(ListNode* head)
 {
     ListNode* tmp;
     ListNode* prev=NULL;
     while(head)
     {
         tmp=head->next;
         head->next=prev;
         prev=head;
         head=tmp;
     }
     return prev;
 }
 ListNode* list(ListNode* A,ListNode* B)
 {
     ListNode* ans=A;
     ListNode* curr=A;
     A=A->next;
     
     while(A&&B)
     {
         curr->next=B;
         curr=B;
         B=B->next;
         curr->next=A;
         curr=A;
         A=A->next; 
     }
     
     while(A)
     {
         curr->next=A;
         curr=A;
         A=A->next;
     }
     while(B)
     {
         curr->next=B;
         curr=B;
         B=B->next;
     }    
     return ans;
 }
 
ListNode* Solution::reorderList(ListNode* A) {
    
    if(!A||!A->next||!A->next->next)
    return A;
    
    ListNode* half=mid(A);
    ListNode* use=half->next;
    half->next=NULL;
    ListNode* yellow=reverse(use);
    ListNode* ANS= list(A,yellow);
    return ANS;  
}
