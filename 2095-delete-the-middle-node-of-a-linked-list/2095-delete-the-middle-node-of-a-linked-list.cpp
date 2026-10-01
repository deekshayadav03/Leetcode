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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode* temp= head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp= temp->next;
        }
        int mid= cnt/2;
          ListNode* s=head;
            ListNode* sp=NULL;
        while(mid>0){
            sp= s;
            s= s->next;
            mid--;
        }
        if(sp==NULL){
            head= s->next;
        }
        else {
              ListNode* del= s;
            sp->next= s->next;
         delete del;
        }
      return head;
    }
};