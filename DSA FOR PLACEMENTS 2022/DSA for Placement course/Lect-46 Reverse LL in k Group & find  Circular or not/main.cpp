//
//  main.cpp
//  Lect-46 Reverse LL in k Group & find  Circular or not
//
//  Created by Himanshu Bairwa on 24/09/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: REVERSE LINKED LIST IN K GROUPS( V.V.V.IMP)
 
 LINK:  https://leetcode.com/problems/reverse-nodes-in-k-group/
 
 CODE:
 
 class Solution {
 public:
     ListNode* reverseKGroup(ListNode* head, int k) {
         
         ListNode* cursor = head;
         for(int i = 0; i < k; i++){
             if(cursor == NULL) return head;
             cursor = cursor->next;
         }
         
         
         ListNode* next = NULL;
         ListNode* curr = head;
         ListNode* prev = NULL;
         int cnt = 0;
         
         while(curr != NULL && cnt < k){
             next = curr->next;
             curr->next = prev;
             prev = curr;
             curr = next;
             cnt++;
         }
         
         if(next != NULL){
             head->next = reverseKGroup(next,k);
         }
         return prev;
     }
 };
 
 */

/*
 QUESTION : FIND WHETHER LINKED LIST IS CIRCULAR OR NOT
 
 LINK:  https://practice.geeksforgeeks.org/problems/circular-linked-list/1
 
 CODE:
 
 bool isCircular(Node *head)
 {
    if(head==NULL)
     {
         return false;
     }
     Node* temp=head;
     while(temp!=NULL)
     {   temp=temp->next;
         if(temp==head)
         {
             return true;
         }
     }
     return false;
 }
 
 
 
 */
