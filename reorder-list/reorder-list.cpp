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
    void reorderList(ListNode* head) {
        vector<ListNode*> L;
        ListNode* p = head;
        while(p!=nullptr){
            L.push_back(p);
            p = p->next;
        }
        int s = L.size();
        int l = 0;
        int r = s-1;
        while(l<r){
            L[l]->next = L[r];
            if(l+1<r)
                L[r]->next = L[l+1];
            else
                L[r]->next = nullptr;
            l++;
            r--;
            if(l==r)
                L[r]->next = nullptr;
        }
    }
};