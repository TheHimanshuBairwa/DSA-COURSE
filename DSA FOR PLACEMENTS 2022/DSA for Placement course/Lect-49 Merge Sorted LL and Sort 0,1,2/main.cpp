//
//  main.cpp
//  Lect-49 Merge Sorted LL and Sort 0,1,2
//
//  Created by Himanshu Bairwa on 25/09/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: SORT 0 , 1 , 2 in LInked List
 
 link:  https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
 
 code:
 APPROACH 1: BRUTE FORCE
 
 

 class Solution
 {
     public:
     //Function to sort a linked list of 0s, 1s and 2s.
     Node* segregate(Node *head) {
         
         Node* temp = head;
         int zeroCount = 0;
         int oneCount = 0;
         int twoCount = 0;
         
         while(temp != NULL){
             if(temp->data == 0){
                 zeroCount++;
             }else if(temp->data == 1){
                 oneCount++;
             }else if(temp->data == 2){
                 twoCount++;
             }
             temp = temp->next;
         }
         
         temp = head;
         while(temp != NULL){
             if(zeroCount != 0){
                 temp->data = 0;
                 zeroCount--;
             }else if(oneCount != 0){
                 temp->data = 1;
                 oneCount--;
             }else if(twoCount != 0){
                 temp->data = 2;
                 twoCount--;
             }
             temp = temp->next;
         }
         return head;
     }
 };


 
 APPROACH 2:
 
 void insertAtTail(Node* &tail, Node* curr ) {
     tail -> next = curr;
     tail = curr;
 }


 Node* sortList(Node *head)
 {
     Node* zerohead = new Node(-1);
     Node* zerotail = zerohead;
     Node* onehead = new Node(-1);
     Node* onetail = onehead;
     Node* twohead = new Node(-1);
     Node* twotail = twohead;
     
     Node* curr = head;
     // separate list for 0s 1s and 2s
     while(curr!=NULL){

         int value = curr->data;
         
         if(value==0){
             insertAtTail(zerotail,curr);
         }else if(value==1) {
             insertAtTail(onetail,curr);
         }else if(value==2) {
             insertAtTail(twotail,curr);
         }
     
         curr = curr->next;
     }
     
     // merge 3 sublist
       
     // 1s vali list is not empty
     if(onehead->next != NULL){
         zerotail->next = onehead->next;
     }
     // 1s vali list is empty
     else{
         zerotail->next = twohead->next;
    }
     
     onetail->next = twohead->next;
     twotail->next = NULL;
     
     // head setup
     head = zerohead->next;
     
     // removing dummy nodes
     delete zerohead;
     delete onehead;
     delete twohead;
     
     return head;
 */


/*
 QUESTION 2: Merge TWO SORTED LINKED LIST
 
 link:  https://leetcode.com/problems/merge-two-sorted-lists/
 
 code:
 
 class Solution {
 public:
     
     ListNode* solve(ListNode* first, ListNode* second){
         
         if(first->next == NULL){
             first->next = second;
             return first;
         }
         
         ListNode* curr1 = first;
         ListNode* next1 = first->next;
         ListNode* curr2 = second;
         ListNode* next2 = second->next;
         
         while(next1 != NULL && curr2 != NULL){
             if(curr2->val >= curr1->val && curr2->val <= next1->val){
                 
                 curr1->next = curr2;
                 next2 = curr2->next;
                 curr2->next = next1;
                 
                 curr1 = curr2;
                 curr2 = next2;
                 
                 
             }else{
                 
                 curr1 = next1;
                 next1 = next1->next;
                 
                 if(next1 == NULL){
                     curr1->next = curr2;
                     return first;
                 }
                 
             }
         }
         
         
         return first;
     }
     
     
     
     
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         
         if(list1 == NULL)
             return list2;
         if(list2 == NULL)
             return list1;
         
         if(list1->val <= list2->val){
             return solve(list1,list2);
         }else{
             return solve(list2,list1);
         }
     }
 };
 
 
 
 
 
 */
