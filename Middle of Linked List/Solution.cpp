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
    ListNode* middleNode(ListNode* head) {
        ListNode* start=head;
        ListNode* mid = head;
        while(start->next!=NULL && start->next->next!=NULL)
        {
            start=start->next->next;
            mid=mid->next;
        }
        if(start->next!=NULL)
        mid=mid->next;
        return mid;
    }
};
