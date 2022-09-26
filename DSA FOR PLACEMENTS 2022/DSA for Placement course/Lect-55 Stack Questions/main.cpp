//
//  main.cpp
//  lect-55 Stack Questions
//
//  Created by Himanshu Bairwa on 27/06/22.
//

#include <iostream>
#include<stack>
using namespace std;

int main() {
    
    // QUESTION 1: Reverse a string using stack
    
    string str = "himanshu";
    
    stack<char> s;
    
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }
    
    string ans = "";
     
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        
        s.pop();
        
    }
    
    cout<<"reverse of "<<str<<" is "<<ans<<endl<<endl;;
    return 0;
}


// QUESTIONS


/*

QUESTION 2: Delete middle element from stack

LINK: https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246

CODE: 

void solve(stack<int>&inputStack, int count,int size){
    // base case
    if(count==size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // RECURSIVE CALL
    solve(inputStack,count+1,size);
    inputStack.push(num);

}

void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;
    solve(inputStack, count, N);
   
}

*/



/*
 
 // Q3 VALID PARENTHESIS
 
 
 bool isValidParenthesis(string expression)
 {
     stack<char> s;
     for(int i=0;i<expression.length();i++) {
         
         char ch = expression[i];
         
         //openning bracket stack push
         // closing bracket then check stacktop and popif matches
         
         if(ch == '{' || ch == '(' || ch == '[') {
             s.push(ch);
         }
         else{
             //for closing bracket
             if(! s.empty()) {
                 char top = s.top();
                 if((ch=='}' && top == '{') ||
                   (ch == ')' && top == '(') ||
                   (ch == ']' && top == '[')){
                     s.pop();
                 }else{
                     return false;
                 }
             }else{
                 return false;
             }
         }
     
     }
     if(s.empty()){
         return true;
     }else{
         return false;
     }
 }
 
 */


/*
 //Question 6  SORT A STACK
 
 
 void sortedinsert(stack<int> &s,int num){
     // base case
     if(s.empty() || (!s.empty() && s.top()<num)) {
         s.push(num);
         return;
     }
     
     int n = s.top();
     s.pop();
     
     // Recursive call
     sortedinsert(s,num);
     s.push(n);
 }

 void sortStack(stack<int> &stack)
 {
     // base case
     if(stack.empty()){
         return;
     }
     
     int num = stack.top();
     stack.pop();
     
     //recursiive call
     sortStack(stack);
     
     sortedinsert(stack,num);
     
 }
 
 */

/*
 // QUESTION-7 REDUNDANT BRACKET
 
 #include<stack>

 bool findRedundantBrackets(string &s)
 {
     stack<char> st;
     
     for(int i =0; i <  s.length();i++) {
         char ch = s[i];
         
         if(ch=='(' || ch=='+' || ch == '-' || ch == '*' || ch == '/'){
             st.push(ch);
         }else {
             // ch ya to koi ')' hai ya to koi lower case letter hai
             
             if(ch ==')'){
                 bool isredundant = true;
                 
                 while(st.top() != '(') {
                     char top = st.top();
                     if(top =='+' || top == '-' || top == '*' || top == '/'){
                         isredundant = false;
                         
                     }
                     st.pop();
                         
                     }
                 if(isredundant == true){
                     return true;
                     
                 }st.pop();
                 
                 }
             }
            
         }
     return false;

 }

      */

/*
 
 
 // question 8 --> MINIMUM COST TO MAKE STRING VALID
 
 #include<stack>
 int findMinimumCost(string str) {
       
     //odd condition
     if(str.length()%2 == 1) {
         return -1;
     }
     
     stack<char> s;
     for(int i=0; i<str.length(); i++) {
         char ch = str[i];
         
         if(ch == '{')
             s.push(ch);
         else
         {
             //ch is closed brace
             if(!s.empty() && s.top() == '{') {
                 s.pop();
             }
             else
             {
                 s.push(ch);
             }
         }
     }
     
         //stack contains invalid expression
         int a = 0, b = 0;
         while(!s.empty()) {
             if(s.top() == '{') {
                 b++;
             }
             else
             {
                 a++;
             }
             s.pop();
         }
         
         int ans = (a+1)/2 + (b+1)/2;
         return ans;
     
     
 } 
 */
