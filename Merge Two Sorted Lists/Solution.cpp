/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* start1=list1;
        ListNode* start2=list2;
        ListNode* head=new ListNode();
        ListNode* curr=head;
        while(start1!=NULL && start2!=NULL)
        {
            if(start1->val<=start2->val)
            {
                curr->next=start1;
                start1=start1->next;
            }
            else
            {
                curr->next=start2;
                start2=start2->next;
            }
            curr=curr->next;
        }
        if(start1==NULL)
        curr->next=start2;
        else if(start2==NULL)
        curr->next=start1;
        return head->next;
    }
};
