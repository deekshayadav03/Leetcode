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
ListNode* reverseLinkedList(ListNode* &head){

    ListNode* prev= NULL;
    while(head!=NULL){
          ListNode* nxt=head->next;
          head->next=prev;
          prev= head;
          head= nxt;
    }
    return prev;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head->next==NULL){
        return NULL;
       }
       head= reverseLinkedList(head);
          ListNode* temp= head;
       
      int i=1;
      int index=n;
        while(temp!=NULL && i<index-1 ){
            temp= temp->next;
            i++;
        }
        if(n==1){
             ListNode* del= head;
             head = head->next;
             delete(del);
        }else {
         ListNode* node= temp->next;
      temp->next=node->next;
         delete(node);

        }
       
        return reverseLinkedList(head);
    }
};