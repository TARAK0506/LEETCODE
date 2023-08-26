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
      map<int,int>mp;
      ListNode* temp=head;
      while(temp!=NULL){
        mp[temp->val]++;
        temp=temp->next;
      }
      ListNode* newnode=new ListNode(0);
      temp=newnode;
      for(auto it:mp){
        if(it.second==1){
          ListNode* curr=new ListNode(it.first);
          temp->next=curr;
          temp=curr;
        }
      }
      return newnode->next;
    }
};