/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if (head == nullptr || head->next == nullptr){
            return false;
        }
        ListNode *yavas = head;
        ListNode *hizli = head;

        while (hizli != nullptr && hizli->next != nullptr){
            yavas = yavas->next;
            hizli = hizli->next->next;
            if(yavas == hizli){
                return true;
            }
        }
        return false;
    }
};
