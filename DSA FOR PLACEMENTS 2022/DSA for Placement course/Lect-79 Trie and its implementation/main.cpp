//
//  main.cpp
//  Lect-79 Trie and its implementation
//
//  Created by Himanshu Bairwa on 07/07/22.
//

#include <iostream>
using namespace std;


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
        int index=  word[0] - 'A';
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
    
    bool searchUtil(TrieNode* root,string word){
        // base case
        if(word.length() == 0){
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode* child;
        
        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        //absent
        else{
            return false;
            
        }
        
        
        // Recursion
        return searchUtil(child,word.substr(1));
        
    }
    
    bool searchWord(string word){
        return searchUtil(root,word);
    }
    
    
    
};

int main() {
    

    Trie *t = new Trie();
    t->insertWord("abcd");
    
    cout<<"present or absent"<<t->searchWord("abcd")<<endl;



    return 0;
}



/*
 QUESTION: IMPLEMENT TRIE
 
 LINK--> https://www.codingninjas.com/codestudio/problems/implement-trie_631356
 
 
 CODE-->
 
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

 class Trie {

 public:
         TrieNode* root;
    //  Initialize your data structure here
     
 Trie() {
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
//   Inserts a word into the trie.
   
 void insert(string word) {
         insertUtil(root,word);
     }

      bool searchUtil(TrieNode* root,string word){
         // base case
         if(word.length() == 0){
             return root->isTerminal;
         }
         int index = word[0] - 'a';
         TrieNode* child;
         
         // present
         if(root->children[index] != NULL){
             child = root->children[index];
         }
         //absent
         else{
             return false;
             
         }
         
         
         // Recursion
         return searchUtil(child,word.substr(1));
         
     }
     
     
//      Returns if the word is in the trie.
     bool search(string word) {
         return searchUtil(root,word);
     }

//    Returns if there is any word in the trie that starts with the given prefix.
     
     bool prefixUtil(TrieNode* root,string word){
         // base case
         if(word.length() == 0){
             return true;
         }
         int index = word[0] - 'a';
         TrieNode* child;
         
         // present
         if(root->children[index] != NULL){
             child = root->children[index];
         }
         //absent
         else{
             return false;
             
         }
         
         
         // Recursion
         return prefixUtil(child,word.substr(1));
         
     }
     
     
     bool startsWith(string prefix) {
          return prefixUtil(root,prefix);
     }
 };
 
 */
