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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *r = new ListNode();
        ListNode *p = r;
        ListNode *a = l1;
        ListNode *b = l2;
        while(a!=nullptr || b!=nullptr){
            if(a==nullptr){
                p->next = new ListNode(b->val);
                p = p->next;
                b = b->next;
            } else if(b==nullptr){
                p->next = new ListNode(a->val);
                p = p->next;
                a = a->next;
            } else {
                if(a->val < b->val){
                    p->next = new ListNode(a->val);
                    p = p->next;
                    a = a->next;
                } else {
                    p->next = new ListNode(b->val);
                    p = p->next;
                    b = b->next;
                }    
            }
            
        }
        return r->next;
    }
};