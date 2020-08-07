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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l = l1;
        ListNode *r = l2;
        ListNode *result = new ListNode();
        ListNode *t = result;
        
        int c=0;
        while(l || r || c){
            int temp = c;
            if(l) {
                temp += l->val;
                l = l->next;                
            }
            if(r) {
                temp += r->val;
                r = r->next;                
            }
            
            if(temp >= 10){
                temp%=10; 
                c=1;
            } else {
                c=0;                
            }
            
            t->val = temp;
            if(l || r || c){
                t->next = new ListNode();
                t = t->next;
            }
        }
        
        return result;
    }
};