//
//  main.cpp
//  Lect-29 Word Ladder I Graph
//
//  Created by Himanshu Bairwa on 15/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}



/*
 QUESTION: WORD LADDER 1
 
 LINK: https://practice.geeksforgeeks.org/problems/word-ladder/1
 
 CODE:
 
 class Solution {
 public:
     int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
         queue<pair<string,int>> q;
         unordered_set<string> st(wordList.begin(),wordList.end());
         q.push({startWord,1});
         st.erase(startWord);
         
         while(!q.empty()){
             string word = q.front().first;
             int steps = q.front().second;
             q.pop();
             
             if(word == targetWord){
                 return steps;
             }
             
             // check for each letter of word by changing it then try to find it exist in set or not
             for(int i = 0; i<word.size(); i++){
                 char original = word[i];
                 for(char ch = 'a'; ch<= 'z'; ch++){
                     word[i] = ch;
                     // check that word after changing exist in set or not if yes then remove it
                     if(st.find(word) != st.end()){
                         st.erase(word);
                         q.push({word,steps+1});
                         
                     }
                 }
                 word[i] = original;
             }
             
         }
         
         return 0;
         
     }
 };
 
 
 
 */
