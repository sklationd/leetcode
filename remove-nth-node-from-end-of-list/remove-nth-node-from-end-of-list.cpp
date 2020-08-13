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
        vector<ListNode *> V;
        ListNode *r = head;
        ListNode *p = head;
        while(p!=nullptr){
            V.push_back(p);
            p = p->next;
        }
        if(n!=V.size()){
            if(n >= 2){
                V[V.size() - n - 1]->next = V[V.size() - n + 1];
            } else {
                V[V.size() - n - 1]->next = nullptr;
            }
        } else {
            r = r->next;   
        }
        return r;
    }
};