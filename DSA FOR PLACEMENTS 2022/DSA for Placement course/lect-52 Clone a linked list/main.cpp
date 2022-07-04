//
//  main.cpp
//  lect-52 Clone a linked list
//
//  Created by Himanshu Bairwa on 25/06/22.
//

#include <iostream>

int main() {
    
    return 0;
}



// clone a linked list
/*

 
 
 //Appproach --> map vali approach hut her space complexity was o(n)
class Solution
{
    private:
    void insertAttail(Node* &head,Node* &tail,int d){
        
        Node* newNode = new Node(d);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //create a clone list
        
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        
        Node* temp = head;
        
        while( temp!=NULL ){
            insertAttail(clonehead,clonetail,temp->data);
            temp = temp->next;
        }
        
        
        // step2 create map unordered
        unordered_map<Node*,Node*> oldtonewnode;
        Node* originalnode = head;
        Node* clonenode = clonehead;
        while(originalnode!=NULL && clonenode != NULL){
            oldtonewnode[originalnode] = clonenode;
            originalnode = originalnode->next;
            clonenode = clonenode->next;
         }
        
        originalnode = head;
        clonenode = clonehead;
        
        while(originalnode != NULL){
            clonenode->arb = oldtonewnode[originalnode->arb];
            originalnode = originalnode->next;
            clonenode = clonenode->next;
        }
        
        
        
       return clonehead;
        
    }

};
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 // Approach 2--> in this space complexity problme is resolved so space complec]xity = o(1)
 
 class Solution
 {
    private:
     void insertAtTail(Node* &head, Node* &tail, int d) {
         Node* newNode = new Node(d);
         if(head == NULL) {
             head = newNode;
             tail = newNode;
         }
         else
         {
             tail -> next = newNode;
             tail = newNode;
         }
     }
     
     void print(Node* head) {
         while(head != NULL) {
             cout << head -> data << " ";
             head = head -> next;
         }cout << endl;
     }

     void printRandom(Node* head) {
         while(head != NULL) {
             cout << " head data: " << head->data <<" ";
             if(head ->arb != NULL) {
                 cout << " head random data" << head -> arb ->data;
             }
             else
             {
                 cout << " head random data: NULL";
             }
             head = head -> next;
             cout << endl;
         }
     }

     public:
     Node *copyList(Node *head)
     {
         //step 1: Create a Clone List
         Node* cloneHead = NULL;
         Node* cloneTail = NULL;
         
         Node* temp = head;
         while(temp != NULL) {
             insertAtTail(cloneHead, cloneTail, temp->data);
             temp = temp -> next;
         }
         
         // step 2: insert nodes of Clone List in between originalList
         
         Node* originalNode = head;
         Node* cloneNode = cloneHead;
         
         while(originalNode != NULL && cloneNode != NULL) {
             Node* next = originalNode -> next;
             originalNode -> next = cloneNode;
             originalNode = next;
             
             next = cloneNode -> next;
             cloneNode -> next = originalNode;
             cloneNode  = next;
         }
         
         // step 3: Random pointer copy
         originalNode = head;
         cloneNode = cloneHead;
         
         while(originalNode != NULL && cloneNode != NULL) {
             
             if(originalNode -> arb != NULL) {
                 cloneNode -> arb = originalNode -> arb -> next;
             }
             else
             {
                 cloneNode -> arb  = NULL;
             }
             
             cloneNode = cloneNode -> next;
             originalNode = originalNode -> next;
         }
         
         //step 4: revert step 2 changes
         Node* original = head;
         Node* copy = cloneHead;
         
          while (original && copy)
             {
                 original->next =
                  original->next? original->next->next : original->next;
          
                 copy->next = copy->next?copy->next->next:copy->next;
                 original = original->next;
                 copy = copy->next;
             }

         // step 5 answer return
         return cloneHead;
     }
 };
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 */
