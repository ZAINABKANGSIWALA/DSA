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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *node=head;
        int count=0;
        while(node)
        {
            count++;
            node=node->next;
        }
        int index=count-n;
        if(index==0 && head->next==NULL){
             head=NULL;
             delete node;
             return head;
        }
        else if(index==0)
        {
            head=head->next;
            delete node;
            return head;
        }
        node=head;
        ListNode* previous=head;
       for(int i=0;i<index;i++) 
       {
        previous=node;
        node=node->next;
       }
       previous->next=node->next;
       delete node;
       return head;        
    }
};