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
ListNode* reverse(ListNode* head){
    ListNode* curr= head;
    ListNode* prev=NULL;
    while(curr!=NULL){
        ListNode* nxt= curr->next;
        curr->next= prev;
        prev= curr;
        curr= nxt;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL) return ; 
         ListNode* fast=head->next;
          ListNode* slow= head;
         while(fast!=NULL&&fast->next!=NULL){
          fast= fast->next->next;
          slow= slow->next;
         }
         ListNode* tail= slow->next;
         slow->next=NULL;
         tail= reverse(tail);
          ListNode* curr= head;
    
     while(curr!=NULL&&tail!=NULL){
         ListNode*  nxt= curr->next;
      ListNode*   tnxt= tail->next;
        tail->next=NULL;
        curr->next= tail;
        curr= curr->next;
        curr->next= nxt;
        curr= nxt;
        tail= tnxt;
     }

    }
};