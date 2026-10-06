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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* odd=NULL;
        ListNode* even=NULL;
        ListNode* temp= head;
          ListNode* evenh=NULL;
           ListNode* oddh=NULL;
           int i =0;
        while(temp!=NULL){
             ListNode* nextnode= temp->next;
            if(i%2==0) {
                 if(odd==NULL){
                odd=temp;
                oddh= odd;
                 }
                else{
                     odd->next= temp;
                    odd=  odd->next;
                }
            }
            else{
             if(even==NULL){
                even=temp;
                evenh= even;
             }
                else{
                    even->next= temp;
                    even= even->next;
                }
            }
                temp=nextnode;
                i++;
        }
       odd->next=evenh;
       even->next=NULL;
        return oddh;

    }
};