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
    int Length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = Length(head);
        if(n > length){
            return head;
        }

        int nodeToRemove = length - n+1;
        if(n == length){
            return head->next;
        }


        ListNode* temp = head;
        ListNode* node = head;
        while(nodeToRemove != 1){
            node = temp;
            temp = temp->next;
            nodeToRemove--;
        }

        node->next = temp->next;
        return head;
    }
};
