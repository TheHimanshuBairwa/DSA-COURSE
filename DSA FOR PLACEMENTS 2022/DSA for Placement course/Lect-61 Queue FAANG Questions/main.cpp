//
//  main.cpp
//  Lect-61 Queue FAANG Questions
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
 
 //QUESTION 1--> REVERSE QUEUE (GFG)
 
 queue<int> rev(queue<int> q)
 {
     stack<int> s;
     
     while(!q.empty()){
         int element = q.front();
         q.pop();
         s.push(element);
     }
     
     while(!s.empty()){
         int element = s.top();
         s.pop();
         q.push(element);
     }
     return q;
 }
 
 
 
 */

/*
 // QUESTION 2--> First negative integer in every window of size k
 
 vector<long long> printFirstNegativeInteger(long long int A[],
                                              long long int N, long long int K) {
              
     deque<long long int> dq;
     vector<long long> ans;
     
     // process first window of k size
     
     for(int i =0;i<K;i++){
         if(A[i]<0){
             dq.push_back(i);
         }
     }
     
     // store answer for first k sized window
     if(dq.size()>0){
         ans.push_back(A[dq.front()]);
     }else{
         ans.push_back(0);
     }
     
     
     // process for remaining window
     for(int i=K;i<N;i++){
         
         //removal
         if(!dq.empty() && i-dq.front()>=K){
             dq.pop_front();
         }
         
         //addition
         if(A[i]<0){
             dq.push_back(i);
         }
         
         // asnwer store
         if(dq.size()>0){
             ans.push_back(A[dq.front()]);
         }else{
             ans.push_back(0);
         }
     }
     return ans;
     
  }
 
 
 
 */


/*
 // QUESTION 3--> REVERSE FIRST K ELEMENT OF QUEUE
 
 // Function to reverse first k elements of a queue.
 queue<int> modifyQueue(queue<int> q, int k) {
    
 stack<int> s;
     //step1: fetch first k elemnts from Queue and put it into stack
     for(int i =0;i<k;i++){
         int ele = q.front();
         q.pop();
         s.push(ele);
     }
     
     //step2: fetch element from stack and put it into queue
     while(!s.empty()){
         int val = s.top();
         s.pop();
         q.push(val);
     }
     
     //step3: fetch first n-k element from queue and pushback
     int t= q.size() - k;
     while(t--){
         int val = q.front();
         q.pop();
         q.push(val);
     }
     
     return q;
     

 */


/*
 QUESTION 4--> FIRST NON REPEATING CHARACTER IN STREAM
 
 class Solution {
     public:
         string FirstNonRepeating(string A){
            
            unordered_map<char,int> count;
            queue<char> q;
            string ans;
            
            for(int i=0;i<A.length();i++){
                char ch = A[i];
                
                //increase count
                count[ch]++;
                
                //queue ,e push kardo
                q.push(ch);
           
              while(!q.empty()){
                  if(count[q.front()]>1){
                      //repeating character
                      q.pop();
                  }
                  else{
                      // non repeating character
                      ans.push_back(q.front());
                      break;
                  }
            }
            if(q.empty()){
                ans.push_back('#');
            }
            
            }
            
             return ans;
           
         }

 };
 
 */


/*
 // QUESTION 5--> CIRCULAR TOUR
 
 /*
 The structure of petrolPump is
 struct petrolPump
 {
     int petrol;
     int distance;
 };*/

 /*You are required to complete this method*/
/*
class Solution{
   public:
   
     //Function to find starting point where the truck can start to get through
     //the complete circle without exhausting its petrol in between.
     int tour(petrolPump p[],int n)
     {
        int deficit = 0;
        int balance = 0;
        int start = 0;
        
        for(int i =0;i<n;i++){
            balance = balance + p[i].petrol - p[i].distance;
            if(balance<0){
                deficit += balance;
                start = i+1;
                balance = 0;
            }
        }
        if(deficit+balance >=0){
            return start;
        }else{
            return -1;
        }
        
     }
 };
 
 
 
 */





/*
 // QUESTION 6--> INTERLEAVE FIRST HALF OF THE QUEUE WITH SECOND HALF
 
 LINK-->  https://www.geeksforgeeks.org/interleave-first-half-queue-second-half/
 
 */

/*
 // QUESTION 7--> IMPLEMENT K QUEUES IN SINGLE ARRAY
 
 https://www.geeksforgeeks.org/efficiently-implement-k-queues-single-array/
 
 LOOK NEXT FOLDER FOR CODE
 Lect-61 Q-7 KQueue implementation in single array
 */

/*
 
 QUESTION-8 --> Sum of minimum and maximum elements of all subarrays of size k. (GFG)
 
 https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/
 
 Lect-61 Q-8 sum of min and max in subarray
 
 */
