//
//  main.cpp
//  Lect-81 Implement a Phone Directory using Trie
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
 QUESTION:  IMPLEMENT A PHONE DIRECTORY USING TRIE
 
 
 LINK--> https://www.codingninjas.com/codestudio/problems/implement-a-phone-directory_1062666
 
 CODE-->
 
 write code again to get clarity
 
 class TrieNode{
     public:
     char data;
     TrieNode* children[26];
     bool isTerminal;
     
     TrieNode(char ch){
         this->data = ch;
         for(int i = 0; i<26; i++){
             children[i] = NULL;
         }
         isTerminal = false;
     }
     
 };

 class Trie{
 public:
     TrieNode* root;
     
     Trie(){
         root = new TrieNode('\0');
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
             root->children[index] = child;
         }
         
         
         // Recursion call
         insertUtil(child,word.substr(1));
     }
     
     
     void insertWord(string word){
         insertUtil(root,word);
     }
     
     void printSuggestion(TrieNode* curr, vector<string> &temp, string prefix){
         if(curr->isTerminal){
             temp.push_back(prefix);
         }
         
         for(char ch = 'a'; ch <= 'z'; ch++) {
             TrieNode* next = curr->children[ch - 'a'];
             
             if(next != NULL){
                 prefix.push_back(ch);
                 printSuggestion(next,temp,prefix);
                 prefix.pop_back();
             }
         }
        
     }
     
     vector<vector<string>> getSuggestion(string str){
         TrieNode* prev = root;
         vector<vector<string>> output;
         string prefix = "";
         for(int i = 0; i< str.length(); i++){
             char lastch = str[i];
             
             prefix.push_back(lastch);
             
             //check for last character
             TrieNode* curr = prev->children[lastch - 'a'];
             
             
             // if not found
             if(curr == NULL) {
                 break;
             }
             
             //if found
             vector<string> temp;
              printSuggestion(curr,temp,prefix);
             
             output.push_back(temp);
             temp.clear();
             prev = curr;
         }
         return output;
     }
     
 };

 vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
 {
     //creattion of trie
     Trie *t = new Trie();
     
     for(int i = 0; i<contactList.size(); i++){
         string str = contactList[i];
         t->insertWord(str);
     }
     
     
     // return ans
     return t->getSuggestion(queryStr);
     
 }
 
 
 
 
 
 
 */
 
