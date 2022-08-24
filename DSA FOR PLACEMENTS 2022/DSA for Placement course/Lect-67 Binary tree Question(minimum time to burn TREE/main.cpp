//
//  main.cpp
//  Lect-67 Binary tree Question(minimum time to burn TREE
//
//  Created by Himanshu Bairwa on 02/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION --> BURNING TREE (GFG)
 
 LINK --> https://practice.geeksforgeeks.org/problems/burning-tree/1
 
 
 CODE-->
 
 class Solution {
   public:
   
   // create mapping of node to parent
   //return target node
   Node* createParentMapping(Node* root,int target,
     map<Node*,Node*> &nodeToParent){
         
         Node* res = NULL;
         queue<Node*> q;
         q.push(root);
         
         while(!q.empty()){
             
             Node* front = q.front();
             q.pop();
             nodeToParent[root] = NULL;
             
             if(front->data == target){
                 res  = front;
             }
             
             if(front->left){
                 nodeToParent[front->left] = front;
                 q.push(front->left);
             }
             
             if(front->right){
                 nodeToParent[front->right] = front;
                 q.push(front->right);
             }
             
         }
         
         return res;
       
       
   }
   
   int burnTree(Node* root,map<Node*,Node*> &nodeToParent){
       map<Node*,bool> visited;
       queue<Node*> q;
       
       q.push(root);
       visited[root] = true;
       
       int ans = 0;
       
       while(!q.empty()){
           
           bool flag =0;
           int size = q.size();
           for(int i = 0;i<size;i++){
               // process neighbouring nodes jo ki hai left ,right, parent
               
               Node* front = q.front();
               q.pop();
               
               if(front->left && !visited[front->left]){
                   flag = 1;
                   q.push(front->left);
                   visited[front->left] = true;
               }
               
               if(front->right && !visited[front->right]){
                   flag = 1;
                   q.push(front->right);
                   visited[front->right] = true;
               }
               
               // queue me uss time pop karne ke baad jo jo front ayenge unka parent check ho raha hai nakii root node ka
               if(nodeToParent[front] && !visited[nodeToParent[front]]){
                   flag = 1;
                   q.push(nodeToParent[front]);
                   visited[nodeToParent[front]] = 1;
               }
           }
           if(flag == true){
               ans++;
           }
             
       }
       return ans;
       
   }
     int minTime(Node* root, int target)
     {
         //algo
         //step 1: create nodeToParent mapping
         //step 2: find target node
         //step 3: burn the tree in min time
         
         
         
         map<Node*,Node*> nodeToParent;
         Node* targetNode = createParentMapping(root,target,nodeToParent);
         
         int ans= burnTree(targetNode,nodeToParent);
         return ans;
         
     }
 };
 
 
 */
