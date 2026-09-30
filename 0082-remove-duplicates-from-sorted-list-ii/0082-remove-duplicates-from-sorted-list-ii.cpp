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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
           ListNode* start=head;
           ListNode* sp=NULL;
               while(start!=NULL&&start->next!=NULL){
                if(start->val==start->next->val){
                 ListNode* end=start->next;
                 ListNode* en=NULL;
                    while(end!=NULL&&end->next!=NULL&&end->val==end->next->val ){
                         end= end->next;
                    }
                    en= end->next;
                    if(sp!=NULL)
                    sp->next= en;
                     else{
                    head= en;
                     }
                    start=en;
                }
                else {
                 sp=start;
                start= start->next;
                }
               }
               return head;
    }
};