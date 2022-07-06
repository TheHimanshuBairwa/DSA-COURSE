//
//  main.cpp
//  Lect-59 Design stack o(1) time and space to getMin()
//
//  Created by Himanshu Bairwa on 28/06/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 // Design a stack to find minimum in stack but in o(1) time and space complexity
 
 #include<stack>
 #include<limits.h>

 class SpecialStack {
     // Define the data members.
     stack<int> s;
     int mini = INT_MAX;;
     
     
     
     
     /*----------------- Public Functions of SpecialStack -----------------*/
     public:
         
     void push(int data) {
         // check for first element push
         if(s.empty())
         {
             s.push(data);
             mini = data;
         }
         else{
             
                 if(data<mini){
                     s.push(2*data-mini);
                     mini = data;
                 
             }else{
                     s.push(data);
                 }
         }
             

     }

     int pop() {
         if(s.empty())
             return -1;
         
         int curr = s.top();
          s.pop();
         if(curr>mini){
             return curr;
            
             
         }else{
             int prevMini = mini;
             int val = 2 * mini - curr;
             mini = val;
             return prevMini;
              
         }
     }

     int top() {
         if(s.empty()){
             return -1;
         }
         
         int curr = s.top();
         if(curr<mini){
             return mini;
         }else{
                 return curr;
         }
     }

     bool isEmpty() {
         return s.empty();
     }

     int getMin() {
         if(s.empty()){
             return -1;
         }
         else
             return mini;
     }
 };
 
 
 
 
 */
