//
//  main.cpp
//  Lect-45 Reverse LL & Middle of Linked List
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
 QUESTION: Reverse a Linked list
 
 link:   https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897
 
 Code:
 


 LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
 {
     if((head == NULL) || (head->next == NULL)) {
         return head;
         
     }
     
     LinkedListNode<int>* prev = NULL;
     LinkedListNode<int>* curr = head;
     LinkedListNode<int>* forward = NULL;
     
     while(curr != NULL) {
         forward = curr->next;
         curr->next = prev;
         prev = curr;
         curr = forward;
     }
     return prev;
 }
 
 
 */

/*
 QUESTION: Middle of Linked List
 
 link:
 
 Code:  Approach 1:
 
 
 
 class Solution{
     public:
     
     
     int getLength(Node* head){
         int len = 0;
         while(head != NULL){
             len++;
             head = head->next;
         }
         return len;
     }
     
     
     int getMiddle(Node *head)              // main funtion
     {
         int len = getLength(head);
         int ans = (len/2);
         
         int cnt = 0;
         Node* temp = head;
         while(cnt<ans){
             cnt++;
             temp = temp->next;
         }
         return temp->data;
     }
     
 };


 
 APPROACH 2:
 

  Node* getmiddle(Node* head) {
 // single node case
      if((head==NULL)||(head->next==NULL)) {
         return head;
      }
      
     // 2 nodes case
      if(head->next->next==NULL) {
         return head->next;
      }
      
      //algo
      Node* fast = head->next;
      Node* slow = head;

      
      while(fast != NULL){
             fast = fast->next;
          if(fast != NULL) {
              fast = fast->next;
          }
          slow = slow->next;
      }
   return slow;
  }

 Node *findMiddle(Node *head) {
    return getmiddle(head);
     
}
 
 
 */
