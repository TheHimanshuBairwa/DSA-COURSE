//
//  main.cpp
//  lect-53 merge sort and flattening of LL
//
//  Created by Himanshu Bairwa on 25/06/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}



 
 // Question 1---> Mergesort in linked list
 
 
 /********************************************************************

     Following is the representation of the Singly Linked List Node:

     class node{
         public:
             int data;
             node * next;
             node(int data){
                 this->data=data;
                 this->next=NULL;
             }
     };
     
 ********************************************************************/
/*
 node* findmid(node* head){
     node* slow = head;
     node* fast = head->next;
     
     while(fast != NULL && fast->next != NULL){
         slow = slow->next;
         fast = fast->next->next;
      
     }
     return slow;
     
 }


 node* merge(node* left, node* right){
     if(left==NULL)
         return right;
     if(right==NULL)
         return left;
     
     node* ans = new node(-1);
     node* temp =ans;
     
     //merge two sorted linked list
     while(left != NULL && right!= NULL) {
         if(left->data < right->data){
             temp->next = left;
             temp = left;
             left = left->next;
              
         }else {
             temp->next = right;
             temp = right;
             right = right->next;

         }
         }
     while(left != NULL) {
          temp->next = left;
          temp = left;
          left = left->next;
     }
     while(right != NULL){
         temp->next = right;
         temp = right;
         right = right->next;
     }
     ans= ans->next;
     return ans;
 }

 node* mergeSort(node *head) {
    
     // base case
     if(head==NULL || head->next==NULL){
             return head;
     }
     
     
     
     //using mid and breaking linked list into two halves
     node* mid = findmid(head);
     //left half and right half of linked list
     node* left = head;
     node* right = mid->next;
     mid->next = NULL;
     
     // recursive calls for sorting both halves
         left = mergeSort(left);
         right = mergeSort(right);
     
     // merge both left and right halves
     
     node* result = merge(left, right);
     
     return result;
     
 }

 
 */






//  Question -2 Flattening of linked list


/*
 
 
 
 
 
 
 
 */




