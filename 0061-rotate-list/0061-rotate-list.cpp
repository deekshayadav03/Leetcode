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
    ListNode* rotateRight(ListNode* head, int k) {
if(head==NULL||head->next==NULL) return head;
   //brut force
    //     while(k>0){
    //  ListNode* temp= head;
    //  ListNode* first=head;
    //  ListNode* prev= NULL;
    //         while(temp->next!=NULL){
    //             prev= temp;
    //          temp= temp->next;
    //         }
    //      temp->next=first;
    //      prev->next=NULL;
    //      head= temp;
    //      k--;

    //     }
    //     return head;

   // optimisation
    ListNode* temp=head;
      int n =0;
      while(temp!=NULL){
        n++;
        temp=temp->next;
      }
      temp= head;

       k=k%n;
       if(k==0) return head;
       
      int trav=n-k;

      while(trav>1){
        temp= temp->next;
        trav--;
      }
        ListNode* newhead= temp->next;
        ListNode* tail=newhead; 
        while(tail->next!=NULL){
           tail= tail->next;
        }
       tail->next= head;
       temp->next=NULL;
       return newhead;
    }
};