//
//  main.cpp
//  Lect-68 MORRIS TRAVERSAL in BInary Tree
//
//  Created by Himanshu Bairwa on 03/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 MORRIS TRAVERSAL
 
 LINK-->  https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/
 
 
 CODE-->
 
 void MorrisTraversal(struct tNode* root)
 {
     struct tNode *current, *pre;
  
     if (root == NULL)
         return;
  
     current = root;
     while (current != NULL) {
  
         if (current->left == NULL) {
             cout << current->data << " ";
             current = current->right;
         }
         else {
  
             // Find the inorder predecessor of current
             pre = current->left;
             while (pre->right != NULL
                    && pre->right != current){
                    
                 pre = pre->right;
                 
                 }
  
             // Make current as the right child of its inorder predecessor
             if (pre->right == NULL) {
                 pre->right = current;
                 current = current->left;
             }
  
             // Revert the changes made in the 'if' part to
                restore the original tree i.e., fix the right
                child of predecessor
 
             else {
                 pre->right = NULL;
                 cout << current->data << " ";
                 current = current->right;
             }
// End of if condition pre->right == NULL
         } // End of if condition current->left == NULL
     } // End of while
 }
 
 */



/*
 VERY VERY VERY IMPORTANT QUESTION
 
 QUESTION 2: FLATTEN A BINARY TREE INTO LINKED LIST
 
 LINK-->  https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1/
 
 CODE-->
 
 class Solution
 {
     public:
     void flatten(Node *root)
     {
         Node* curr = root;
         while(curr != NULL){
             
             
             if(curr->left){
                 
                Node* pred = curr->left;
                
                while(pred->right)
                     pred = pred->right;
                   
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
                 
             }
                 curr = curr->right;
         }
     
         // // left part ko NULL karte hue jana hai
         // curr = root;
         // while(curr != NULL){
         //     curr->left = NULL;
         //     curr = curr->right;
         // }
         
     }
     
 };
 
 
 
 
 */
