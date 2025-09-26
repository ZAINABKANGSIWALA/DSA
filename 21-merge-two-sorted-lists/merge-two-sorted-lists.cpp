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
       ListNode *t1=list1, *t2=list2, *head=NULL;
       if(t1->val < t2->val)
       {
        head=t1;
        t1=t1->next;
       }
       else
       {
        head=t2;
        t2=t2->next;
       }
       ListNode *node =head;
       while(t1 && t2)
       {
        if(t1->val < t2->val)
        {
            node->next=t1;
            t1=t1->next;
            node=node->next;
        }
        else 
        {
            node->next=t2;
            t2=t2->next;
            node=node->next;
        }
       }
       if(t1) node->next=t1;
       if(t2) node->next=t2;
       return head;
    }
};