//
//  main.cpp
//  Lect-80 Trie Longest common prefix Problem
//
//  Created by Himanshu Bairwa on 10/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION 1: LARGEST COMMON PREFIX

 LINK--> https://www.codingninjas.com/codestudio/problems/longest-common-prefix_2090383
 
 CODE-->
 
 APPROACH 1:
 
 string longestCommonPrefix(vector<string> &arr, int n)
 {
     // Approach 1
     
     string ans = "";
     // for traversing characters of first string
     for(int i = 0; i< arr[0].length(); i++){
         char ch = arr[0][i];
         
         bool match = true;
         
         for(int j = 1; j<n; j++){
             
             
             // not match
             if(arr[j].size() < i || ch != arr[j][i]){

                     match = false;
                     break;
             }
         }
         if(match == false){
             break;
         }
         else
             ans.push_back(ch);
     }
     return ans;
 }



 
 
 
 APPROACH 2:
 
 class TrieNode{
     public:
     char data;
     TrieNode* children[26];
     int childCount;
     bool isTerminal;
     
   TrieNode(char ch){
       data = ch;
       for(int i =0; i<26; i++){
           children[i] = NULL;
       }
       childCount = 0;
       isTerminal = false;
   }
     
 };

 class Trie{
     public:
     TrieNode* root;
     
     Trie(char ch){
         root = new TrieNode(ch);
     }
     
   void insertUtil(TrieNode* root,string word){
     // base case
         if(word.length() == 0){
             root->isTerminal = true;
             return;
         }
         
         // assumption: words will be of capital letters
         int index=  word[0] - 'a';
         TrieNode* child;
         
         
         // present
         if(root -> children[index] != NULL){
             child = root->children[index];
         }
         
         // absent
         else{
             child = new TrieNode(word[0]);
             root->childCount++;
             root->children[index] = child;
         }
         
         
         // Recursion call
         insertUtil(child,word.substr(1));
  }
     
   void insertword(string word) {
         insertUtil(root,word);
     }
     
     void lcp(string str, string &ans) {
         
         for(int i = 0; i<str.length(); i++){
             char ch = str[i];
             
             if(root->childCount == 1){
                 ans.push_back(ch);
                 // aagee badh jaoo
                 int index = ch - 'a';
                 root = root->children[index];
                     
             }
             else{
                 break;
             }
             if(root->isTerminal){
                 break;
             }
         }
     }
     
     
 };



 string longestCommonPrefix(vector<string> &arr, int n)
 {
     Trie *t = new Trie('\0');
     
     // insert kardi sari ki sari strings
     for(int i = 0; i<n; i++){
         t->insertword(arr[i]);
     }
     
     string first = arr[0];
     string ans = "";
     
     t->lcp(first,ans);
     
     return ans;
     
     
 
 
 */
