/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
ListNode *intersection(ListNode *headA, ListNode *headB){
     while(headA!=NULL&&headB!=NULL&&headA!=headB){
              headA=headA->next;
             headB=headB->next;
            }
            if(headA==NULL||headB==NULL) return NULL;
            return headB;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        //Brut force
        // unordered_map<ListNode *, bool>mp;
        // while(headA!=NULL){
        //     mp[headA]=true;
        //     headA=headA->next;
        // }
        //  while(headB!=NULL){
        //     if(mp[headB]){
        //         return headB;
        //     }
        //     mp[headB]=true;
        //     headB=headB->next;
        // }
        // return NULL;

        //optimisation
        int lengthA=0;
        int lengthB=0;
        ListNode * tempA=headA;
        ListNode * tempB=headB;
        while(tempA!=NULL){
            lengthA++;
            tempA=tempA->next;
        }
        while( tempB!=NULL){
            lengthB++;
             tempB= tempB->next;
        }
        int diff=0;
        if(lengthB>lengthA||lengthB<lengthA)
        diff= abs(lengthA-lengthB);
        if(lengthA==lengthB){
              return intersection(headA,headB);
        }
        else if(lengthB>lengthA){
            while(diff>0){
                headB=headB->next;
                diff--;
            }
                return intersection(headA,headB);
        }
        else {
             while(diff>0){
                headA=headA->next;
                diff--;
            }
            return intersection(headA,headB);
        }
return NULL;
    }
};