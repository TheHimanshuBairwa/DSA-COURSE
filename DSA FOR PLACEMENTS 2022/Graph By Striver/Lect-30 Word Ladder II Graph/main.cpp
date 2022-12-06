//
//  main.cpp
//  Lect-30 Word Ladder II Graph
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
QUESTION: WORD LADDER II

LINK:   https://practice.geeksforgeeks.org/problems/word-ladder-ii/1
 
CODE:
 
 class Solution {
 public:
     vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(),wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        vector<string> usedOnLevel;
        usedOnLevel.push_back(beginWord);
        int level = 0;
        vector<vector<string>> ans;
        
        while(!q.empty()){
            vector<string> vec = q.front();
            q.pop();
            
            // erase all words that has been
            //used in previous level of transform
            
            if(vec.size() > level){
                level++;
                for(auto it: usedOnLevel){
                    st.erase(it);
                }
            }
            
            string word = vec.back();
            // store ans
            if(word == endWord){
                //first sequence where we reached end
                if(ans.size() == 0){
                    ans.push_back(vec);
                }
                else if(ans[0].size() == vec.size()){
                    ans.push_back(vec);
                }
            }
            
            for(int i = 0; i<word.size(); i++){
                char original = word[i];
                
                for(char c = 'a'; c <= 'z'; c++){
                    word[i] = c;
                    if(st.count(word) > 0){
                        vec.push_back(word);
                        q.push(vec);
                        
                        // mark as visited on array
                        usedOnLevel.push_back(word);
                        vec.pop_back();
                    }
                }
                
                
                word[i] = original;
            }
        }
        return ans;
     }
 };



*/
