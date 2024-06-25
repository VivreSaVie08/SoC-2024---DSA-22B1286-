class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i = 0;
        ListNode* dummy = head;
        while(dummy != NULL){
            dummy = dummy -> next;
            i++;
        }
        int ans = i/2;
        ListNode* temp = head;
        int j = 0;
        while(j < ans){
            temp = temp -> next;
            j++;
        }
        return temp;
    }
};