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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* t1 = l1 ;
          ListNode* t2 = l2 ;
          int c = 0 ; 
          ListNode * temp = new  ListNode(0)  ;
           ListNode* start = temp ;
          while(t1!=NULL || t2 != NULL || c ){
              int sum = 0 ;
              if(t1 != NULL ){
                  sum += t1->val ;
                  t1 = t1->next ;
              }
              if(t2 != NULL ){
                  sum += t2->val ;
                  t2 = t2->next ;
              }
              sum += c ;
              c = sum /10 ;
               ListNode* l = new  ListNode(sum%10) ;
               start->next = l ;
               start = start -> next ;


              
          }
          return temp->next ;

    }
};