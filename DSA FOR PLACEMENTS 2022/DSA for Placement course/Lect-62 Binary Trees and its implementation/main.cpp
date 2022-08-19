//
//  main.cpp
//  Lect-62 Binary Trees and its implementation
//
//  Created by Himanshu Bairwa on 30/06/22.
//

#include <iostream>
#include<queue>
using namespace std;

class node{
    
public:
    int data;
    node* left;
    node* right;
    
   
    // Constructor
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    
};
// Function which create Tree
node* buildTree(node* root) {
    
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data == -1){
        return NULL;
    }
    
    cout<<"Enter data for inserting in left: "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right: "<<data<<endl;;
    root->right = buildTree(root->right);
    return root;
    
}

// Method of printint tree data in Tree type Structure
// Level order Traversal is also known as Breadth First Search
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);       // sepreater for sepreating the level of the tree
    
    
    while(!q.empty()){
        node* temp = q.front();
        
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


// Inorder Traversal LNR
void inOrder(node* root){
    
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
void preOrder(node* root){
    
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
void postOrder(node* root){
    
    //base case
    if(root == NULL){
        return;
        
    }
    
    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

// Build Tree using LEVELORDER TRAVERSAL
void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root node:" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }


int main() {
    
    node* root  = NULL;
   
    buildFromLevelOrder(root);
    
    cout<<endl;
    cout<<"printing the level order traversal output"<<endl;
    levelOrderTraversal(root);
    
    /*
    
   
    //creating a tree
    root = buildTree(root);
    
    // data  // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    
    // Level order traversal
    cout<<"printing the level order traversal output"<<endl;
    levelOrderTraversal(root);
    
    cout<<"Printing Inorder traversal: "<<endl;
    inOrder(root);
    cout<<endl;
    
    cout<<"Printing Preorder traversal: "<<endl;
    preOrder(root);
    cout<<endl;
    
    cout<<"Printing postorder traversal: "<<endl;
    postOrder(root);
    cout<<endl;
    
    
    
     */
    
    return 0;
}



/*
 // QUESTION--> Count Leaf nodes in Tree
  link -->  https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTab=1
 
 

 void inOrder(BinaryTreeNode<int>* root,int &count){
     
     //base case
     if(root == NULL){
         return;
         
     }
     
     // LNR
     inOrder(root->left,count);
     
     if(root->left == NULL && root->right == NULL){
         count++;
     }
     inOrder(root->right,count);
 }



 int noOfLeafNodes(BinaryTreeNode<int> *root){
     int cnt= 0;
     inOrder(root,cnt);
     return cnt;
 }
 
 
 
 */
