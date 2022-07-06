//
//  main.cpp
//  Lect-69 Binary Search Tree and its implementation
//
//  Created by Himanshu Bairwa on 03/07/22.
//

#include <iostream>
#include<queue>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    
};

Node* insertIntoBST(Node* root,int d){
    
    //base case
    if(root == NULL){
        root  = new Node(d);
        return root;
    }
    
    if(d > root->data){
        // root ke right me insert kardo
        root->right = insertIntoBST(root->right,d);
    }
    
    if(d < root->data){
        //left side me insert karna hai
        root->left  = insertIntoBST(root->left, d);
    }
    
    return root;
}

  


void takeInput(Node* &root){
    int data;
    cin>>data;
    
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

// Inorder Traversal LNR
void inOrder(Node* root){
    
    //base case
    if(root == NULL){
        return;
        
    }
    
    // LNR (Left Node Right)
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// PreOrder Traversal NLR
void preOrder(Node* root){
    
    //base case
    if(root == NULL){
        return;
        
    }
    
    // NLR
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// PostOrder Traversal LRN
void postOrder(Node* root){
    
    //base case
    if(root == NULL){
        return;
        
    }
    
    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}



void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);       // sepreater for sepreating the level of the tree
    
    
    while(!q.empty()){
        Node* temp = q.front();
        
        q.pop();
        
        if(temp == NULL){
            // purana vala level complete ho chuka hai
            cout<<endl;
            if(!q.empty()){
                // q still has some child nodes
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }
            
        }
        
    }
}



// fucntion to find minimum value in BST
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}


// fucntion to find maximum value in BST
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}


// fucntion to delete node form BST

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root == NULL){
        return root;
    }
    
    if(root->data == val){
        // 0 child case
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child case
        
        // 1 child-- left child hai
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        
        // 1 child -- right child hai
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        
        // 2 child case
        if(root->left != NULL && root->right != NULL){
            int mini  = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
            
        }
        
        
    }
    else if(root->data > val){
        // left part me jaoo
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else{
        // right part me jaoo
        root->right = deleteFromBST(root->right,val);
        return root;
    }
    return root;
}



int main() {
   
    Node* root = NULL;
    
    cout<<"enter input data for BST: "<<endl;
    takeInput(root);
    
    cout<<"printing the BST Level Order "<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    cout<<"printing the BST using Inorder "<<endl;
    inOrder(root);

    cout<<endl;
    cout<<"printing the BST using Preorder "<<endl;
    preOrder(root);

    cout<<endl;
    cout<<"printing the BST using Postorder "<<endl;
    postOrder(root);

    cout<<endl<<"minimum value in BST: "<< minVal(root)->data<<endl;
    
    cout<<endl<<"maximum value in BST: "<< maxVal(root)->data<<endl;
    
    // Deleting node
    deleteFromBST(root,50);
    
    cout<<"printing the BST Level Order "<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    cout<<"printing the BST using Inorder "<<endl;
    inOrder(root);

    cout<<endl;
    cout<<"printing the BST using Preorder "<<endl;
    preOrder(root);

    cout<<endl;
    cout<<"printing the BST using Postorder "<<endl;
    postOrder(root);
    
    
    return 0;
}


/*
 QUESTION : SEARCH IN BST
 
 LINK--> https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878?leftPanelTab=1
 
 CODE-->
 
 bool searchInBST(BinaryTreeNode<int> *root, int x) {
 
 //RECURSION VALI APPROACH
 
     // base case
     if(root == NULL) {
         return false;
     }
     if(root->data == x){
         return true;
     }
     
     if(root->data > x){
         // search in left part me
         return searchInBST(root->left,x);
     }
     else{
         // root->data < x to right part me search karo
         return searchInBST(root->right,x);
         
     }
}
 
 
 ITERATIVE APPROACH
 
 bool searchInBST(BinaryTreeNode<int> *root, int x) {
     
     // ITERATIVE METHOD
     
    BinaryTreeNode<int> *temp = root;
     
     while(temp != NULL){
         if(temp->data == x){
             return true;
         }
         if(temp->data > x){
             temp = temp->left;
         }
         else{
             temp = temp->right;
         }
        
     }
      return false;
     }
 
 
 */


