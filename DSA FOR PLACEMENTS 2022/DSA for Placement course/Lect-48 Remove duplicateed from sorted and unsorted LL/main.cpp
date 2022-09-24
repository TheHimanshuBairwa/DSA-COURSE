//
//  main.cpp
//  Lect-48 Remove duplicateed from sorted and unsorted LL
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
 QUESTION : Remove duplicates from Sorted Linked list
 
 link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 
 code:
 
 class Solution {
 public:
     ListNode* deleteDuplicates(ListNode* head) {
         if(head == NULL){
             return NULL;
         }
         
         ListNode* curr = head;
         while(curr != NULL){
         
             if((curr->next != NULL) && (curr->val == curr->next->val)){
                 ListNode* next_next = curr->next->next;
                 ListNode* NodetoDelete = curr->next;
                 delete(NodetoDelete);
                 curr->next = next_next;
             }else{
                 curr = curr->next;
             }
            
             
             }
           return head;
         }
     
     
 };
 
 */

/*
 QUESTION : Remove Duplicated from Unsorted Linked List
 
 link: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
 
 CODE:
 
 class Solution
 {
     public:
     //Function to remove duplicates from unsorted linked list.
     Node * removeDuplicates( Node *head)
     {
      if(head==NULL) return NULL;
        unordered_map<int,int> mp;
        
        Node * temp = head;
        mp[temp->data] = 1;
        while(temp->next!=NULL)
        {
            if(mp.count(temp->next->data))          // mp.count(key) will check key value present or not in map
            {                                       // mp.count() will search for whether that key is present or not in map
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
                mp[temp->data] = 1;
            }
        }
        
        return head;
     }
 };

 
 
 
 */
