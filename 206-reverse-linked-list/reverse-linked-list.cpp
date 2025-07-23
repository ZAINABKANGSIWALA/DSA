/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *node=head;
       vector<int> arr;
       while(node!=NULL)
    {
        arr.push_back(node->val);
        node=node->next;
    }
    node=head;
    int i=arr.size()-1;
    while(node!=NULL)
    {
        node->val=arr[i--];
        node=node->next;
    }
    return head;

    }
};