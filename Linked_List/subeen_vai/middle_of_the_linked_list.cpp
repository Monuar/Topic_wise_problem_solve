class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mid=cnt/2;
       while(mid--){
           head=head->next;
       }
        return head;
    }
};
