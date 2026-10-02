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
    
//    ListNode* reverse(ListNode* &list){
//      ListNode* curr= list;
//   ListNode* prev=NULL;
//    ListNode* nxt= NULL;
//      while(curr!=NULL){
//         nxt= curr->next;
//         curr->next= prev;
//         prev= curr;
//         curr= nxt;
//      }
//      return prev;
//     }
     void insertTail(  ListNode* &anshead,   ListNode* &anstail,int digit){
          ListNode* data= new ListNode( digit);
          if (anshead==NULL){
            anshead= data;
            anstail= data;
          }
          else{
            anstail->next= data;
             anstail= data;
          }
     }
    ListNode* add( ListNode* h1, ListNode* h2){
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        int car=0;
        while(h1!=NULL||h2!=NULL|| car!=0){
             int val1=0;
             int val2=0;
            if (h1!=NULL)
            val1= h1->val;
            if (h2!=NULL)
            val2= h2->val;
            int sum= val1+val2+car;
            int digit= sum%10;
            insertTail(anshead, anstail, digit);
            car= sum/10;
            if(h1!=NULL) h1=h1->next;
            
            if (h2!=NULL) h2= h2->next;

        }
        return anshead;

    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1==NULL) return l2;
        if(l2==NULL) return l1;
      
         ListNode* addNode = add(l1, l2);
         return (addNode);
    }
};