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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next == nullptr)
            return head;
        else {
            ListNode* p = head;
            ListNode* r = head->next;
            ListNode* prev = nullptr;
            while(p!=nullptr && p->next != nullptr){
                ListNode* n = p->next;
                p->next = n->next;
                n->next = p;
                if(prev!=nullptr){
                    prev->next = n;
                }
                prev = p;
                p = p->next;
            }
            return r;
        }
    }
};