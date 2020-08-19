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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)
            return nullptr;
        while(head!=nullptr && head->val == val){
            head = head->next;
        } 
        ListNode* start = head;
        while(head!=nullptr && head->next != nullptr){
            if(head->next->val == val){
                head->next = head->next->next;
            } else {
                head = head->next;
            }
        }
        return start;
    }
};s