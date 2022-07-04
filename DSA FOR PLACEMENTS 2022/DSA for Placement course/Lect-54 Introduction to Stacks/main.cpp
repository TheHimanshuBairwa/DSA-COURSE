//
//  main.cpp
//  Lect-54 Introduction to Stacks
//
//  Created by Himanshu Bairwa on 26/06/22.
//

#include <iostream>
#include<stack>
using namespace std;

class Stack{
  
    // data members or properties
public:
    int *arr;
    int top;
    int size;

    // funtions or behaviour
    
    //constructor
    
    Stack(int size){
        
        this->size = size;
        arr = new int[size];
        top = -1;
    
    }
    
    
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
        
        
    }
    
    
    int peek(){
        if(top>=0 ){
            return arr[top];
            
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
        
    }
    
    bool isempty(){
        if(top == -1){
            return true;
            
        }else{
            return false;
        }
        
    }
    
};

int main() {
    
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isempty()){
        cout<<"stack is empty"<<endl;
        
    }else{cout<<"stack is not empty"<<endl;
        
    }





    return 0;
}


/*
 QUESTION IMPLEMENT TWO STACK IN ARRAY
 
 
 class TwoStack {

     int *arr;
     int top1;
     int top2;
     int size;
     
 public:

     // Initialize TwoStack.
     TwoStack(int s) {            // constructor
         this->size = s;
         top1=-1;
         top2 = s;
         arr = new int[s];
         
     }
     
     // Push in stack 1.
     void push1(int num) {
         // atleast one empty space present
         if(top2-top1 > 1){
             top1++;
             arr[top1] = num;
         }else {
 //             cout<<"stack is overflow"<<endl;
         }
     }

     // Push in stack 2.
     void push2(int num) {
         if(top2-top1 > 1){
             top2--;
             arr[top2] = num;
             
         }else {
 //             cout<<"stack is overflowed"<<endl;
         }
     }

     // Pop from stack 1 and return popped element.
     int pop1() {
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
            
        }else{
 //            cout<<"stack is under flow"<<endl;
            return -1;
        }
     }

     // Pop from stack 2 and return popped element.
     int pop2() {
         if(top2 != size){
             int ans = arr[top2];
             top2++;
             return ans;
         }else{
 //             cout<<"stack is under flow"<<endl;
                 return -1;
         }
     }
 };

 
 */
