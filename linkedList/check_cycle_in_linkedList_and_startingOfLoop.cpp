#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return head;
        }
        ListNode *fp=head,*sp = head;
        bool flag =0;
        ListNode* curr = new ListNode();
        while(fp and fp->next!=NULL ){
            fp = fp->next->next;
            sp = sp->next;
            if(sp == fp){
                flag=1;
                curr = sp;
                break;
            }
        }
        if(!flag){
            return NULL; 
        }
        else{
            ListNode* k = head;
            ListNode* res = new ListNode();
            while(k->next!=NULL){
                if(curr == k){
                    res =  k;
                    break;
                }
                k = k->next;
                curr = curr->next;
                
            }
            return res;
        }
    }
};