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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
           ListNode* start=head;
           ListNode* startPrev=NULL;
           ListNode* nxt=NULL;
           while(start!=NULL){
            if(start->val==val){
                nxt= start->next;
                if(startPrev==NULL){
                    ListNode* temp= start;
                    delete(temp);
                    head= nxt;
                }
                else {
                    ListNode* temp= start;
                    delete(temp);
                     startPrev->next= nxt;
                }
                start= nxt;

            }
            else{
                startPrev=start;
                start= start->next;
            }
           }
           return head;
    }
};