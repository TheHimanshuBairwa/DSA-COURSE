//
//  main.cpp
//  lect-50 check plaindrome in LL
//
//  Created by Himanshu Bairwa on 25/06/22.
//

#include <iostream>
using namespace std;

int main() {

    return 0;
}



/*

// Approach 1 for checing palindrome in linked list

bool checkpalindrome(vector<int> arr){
    int start = 0;
       int end = arr.size()-1;
       while(start <= end){
           if(arr[start] != arr[end]){
               return false;
           }
           
           start++;
           end--;
       }
       return 1;
   
}
   
driver code
bool isPalindrome(Node *head)
   {
       vector<int> arr;
       Node* temp = head;
       while(temp!=NULL){
           arr.push_back(temp->data);
           temp = temp->next;
       }
       
      return checkpalindrome(arr);
       
   }


 
 
 
 
 // Approach 2
 
 private:
    Node* getMid(Node* head ) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
 
 // reverse linked list
 
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL; 
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
 
 driver code
 
 bool isPalindrome(Node *head)
    {
        if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        Node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
}
