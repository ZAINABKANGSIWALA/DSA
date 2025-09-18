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
        if(!list1) return list2;
        if(!list2) return list1;
       ListNode *node1=list1;
       ListNode *node2=list2;
       ListNode *head=NULL;
       if(node1 && node2)
       {
        if(node1->val < node2->val)
        {
            head=node1;
            node1=node1->next;
        }
        else
        {
            head=node2;
            node2=node2->next;
        }
       }
        ListNode *node=head;
        while(node1 && node2)
        {
            if(node1->val < node2->val)
            {
                node->next=node1;
                node1=node1->next;
            }
            else 
            {
                node->next=node2;
                node2=node2->next;
            }
            node=node->next;
        }
        while(node1)
        {
            node->next=node1;
            node1=node1->next;
            node=node->next;
        }
        while(node2)
        {
            node->next=node2;
            node2=node2->next;
            node=node->next;
        }
        return head;       
    }
};