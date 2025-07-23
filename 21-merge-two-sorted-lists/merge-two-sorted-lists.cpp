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
       ListNode *head=NULL;
        ListNode *node1=list1;
        ListNode *node2=list2;
    
        if(node1->val<node2->val)
        {
             head=node1;
             node1=node1->next;
        }
        else 
        {
            head=node2;
            node2=node2->next;
        } 
        
        ListNode *node=head;
        
        
        while(node1!=NULL && node2!=NULL)
        {
            if(node1->val<node2->val){
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
            while(node1!=NULL)
            {
                node->next=node1;
                node=node->next;
                node1=node1->next;

            }
            while(node2!=NULL)
            {
                node->next=node2;
                node=node->next;
                node2=node2->next;
            }

            
        
        return head;

    }
};