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
        int count=0;
        ListNode *node=head;
        while(node!=NULL)
        {
            count++;
            node=node->next;
        }
        node=head;
        int mid=(count/2)+1;
        while(mid>1)
        {
            node=node->next;
            mid--;
        }
        return node;
    }
};