//
//  main.cpp
//  Lect-60 QUEUE and its implementation
//
//  Created by Himanshu Bairwa on 28/06/22.
//

#include <iostream>
#include<queue>
using namespace std;

int main() {
    
    

    // doubly ended queue
    
    deque<int> d;
    
    d.push_front(10);
    d.push_back(20);
    d.push_front(30);
    d.push_back(40);
    
    for(int i =0;i<d.size();i++){
        cout<<d.back()<<" ";
    }cout<<endl;
    
    
    
    
    
    
    
    /*
    
    // create singly queue using STL
    queue<int> q;
    
    q.push(10);
    
    cout<<"front value of queue is "<<q.front()<<endl;
    
    q.push(20);
    
    cout<<"front value of queue is "<<q.front()<<endl;
    
    q.push(30);
    
    cout<<"front value of queue is "<<q.front()<<endl;
    
    cout<<"rear element of queue is "<<q.back()<<endl;

    cout<<"size of queue is "<<q.size()<<endl;
    
    q.pop();
    q.pop();
    
    cout<<"size of queue is "<<q.size()<<endl;
    
*/
    
    
    
    
    
    
    
    
/*
 // CIRCULAR QUEUE IMPLEMENTATION
 
 class CircularQueue{
     int *arr;
     int front;
     int rear;
     int size;
     public:
     // Initialize your data structure.
     CircularQueue(int n){
         size = n;
         arr = new int[size];
         front = -1;
         rear = -1;
        
     }

     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
     bool enqueue(int value){
         if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))) {
             // to check queue is full
 //             cout<<"Queue is full";
             return false;
             
         }else if(front==-1) { // insert first element ;
             front = rear = 0;
             
             
         }else if(rear==size-1 && front !=0){       // to maintain cyclic nature
             rear = 0;
             
         }else {
             //normal flow
             rear++;
            
         }
         //pushing value inside the queue
          arr[rear] = value;
         return true;
     }

     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
     int dequeue(){
         if(front==-1){            // to check queue is empty
 //             cout<<"queue is empty";
             return -1;
             
         }
         int ans = arr[front];
         arr[front] = -1;
         if(front==rear){        // single element hai
             front = rear = -1;

         }else if(front == size-1){  // to maintain cyclic nature
             
             front =0;
         }else{
             //normal flow
             front++;
         }
         return ans;
     }
 };
 
 
 
 */
      
 
    
    
    
    
    
    
/*
 
 
 
 // DOUBLY ENDED QUEUE IMPLEMENTATION
 
 class Deque
 {
     int *arr;
     int front;
     int rear;
     int size;
     
 public:
     // Initialize your data structure.
     Deque(int n)
     {
         size= n;
         arr = new int[n];
         front=-1;
         rear=-1;
     }

     // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
     bool pushFront(int x)
     {
         if(isFull()) {
             return false;
         }else if( isEmpty()) {
             front = 0;
             rear = 0;
         }else if(front==0 && rear !=size-1){
             // push front me front piche jata rehta hai and cyclic nature
             
             front= size-1;
             

         }   else{
                 front--;
         }
         arr[front] = x;
         return true;
     }

     // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
     bool pushRear(int x)
     {
         if(isFull()) {
             // to check queue is full
 //             cout<<"Queue is full";
             return false;
             
         }else if(isEmpty()) { // insert first element ;
             front = rear = 0;
             
             
         }else if(rear==size-1 && front !=0){       // to maintain cyclic nature
             rear = 0;
             
         }else {
             //normal flow
             rear++;
            
         }
         //pushing value inside the queue
          arr[rear] = x;
         return true;
     }

     // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
     int popFront()
     {
        if(front==-1){            // to check queue is empty

             return -1;
             
         }
         int ans = arr[front];
         arr[front] = -1;
         if(front==rear){        // single element hai
             front = rear = -1;

         }else if(front == size-1){  // to maintain cyclic nature
             
             front =0;
         }else{
             //normal flow
             front++;
         }
         return ans;
     }

     // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
     int popRear()
     {
         if(isEmpty()){            // to check queue is empty

             return -1;
             
         }
         int ans = arr[rear];
         arr[rear] = -1;
         if(front==rear){        // single element hai
             front = rear = -1;

         }else if(rear==0){  // to maintain cyclic nature
             
             rear = size-1;
         }else{
             //normal flow
             rear--;
         }
         return ans;
     }

     // Returns the first element of the deque. If the deque is empty, it returns -1.
     int getFront()
     {
         if(isEmpty()){
             return -1;
         }
         
         return arr[front];
     }

     // Returns the last element of the deque. If the deque is empty, it returns -1.
     int getRear()
     {
         if(isEmpty()){
             return -1;
         }
         
         return arr[rear];
     }

     // Returns true if the deque is empty. Otherwise returns false.
     bool isEmpty()
     {
         if(front==-1)
             return true;
         else
             return false;
     }

     // Returns true if the deque is full. Otherwise returns false.
     bool isFull()
     {
         if((front==0 && rear==size-1) || (front != 0 && rear==(front-1)%(size-1))) {
             return true;
         }else
             return false;
     }
 };
 
 
 
 */

     return 0;
}
