class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return NULL;

        ListNode* temp = head;

        if(head->next == NULL)
            return head;

        ListNode* temp2 = head->next;

        while(temp != NULL && temp2 != NULL)
        {
            swap(temp->val, temp2->val);

            temp = temp2->next;

            if(temp2->next != NULL)
                temp2 = temp2->next->next;
        }

        return head;
    }
};