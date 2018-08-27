/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


ListNode* temp=A;



    unordered_map<ListNode*,bool> l;
    while(temp!=NULL)
    {

        if(l.count(temp)>0)
        {
            break;
        }


        l[temp]=true;
        temp=temp->next;

    }
    if(temp==NULL)
    return NULL;
    return temp;

}
