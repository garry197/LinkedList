/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {

    int x=A->val+B->val;
    int y=0;
    if(x>9)
    {
        y=x/10;
        x=x%10;
    }
    ListNode *head=new ListNode(x);
    //head->val=x;
     //ListNode*temp1=head;
    ListNode*temp=head;
    A=A->next;
    B=B->next;

    while(A!=NULL&&B!=NULL)
    {

     x=A->val+B->val+y;
    y=0;
    if(x>9)
    {
         y=x/10;
        x=x%10;

    }


        ListNode *var=new ListNode(x);
        var->val=x; temp->next=var;
        temp=temp->next;

        A=A->next;
        B=B->next;


    }

    while(A!=NULL)
    {
         x=A->val+y;
    y=0;
    if(x>9)
    {
         y=x/10;
        x=x%10;

    }

    ListNode *var1=new ListNode(x);

        temp->next=var1;
        temp=temp->next;

        A=A->next;
    }

      while(B!=NULL)
    {
         //cout<<head->val;
         x=B->val+y;
    y=0;
    if(x>9)
    {
         y=x/10;
        x=x%10;

    }

    ListNode *var2=new ListNode(x);

        temp->next=var2;
        temp=temp->next;

        B=B->next;
    }

   if(y!=0)
   {
       ListNode *var2=new ListNode(y);

        temp->next=var2;

   }

   return head;

}
