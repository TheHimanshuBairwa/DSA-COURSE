//
//  main.cpp
//  Lect-61 Q-8 sum of min and max in subarray
//
//  Created by Himanshu Bairwa on 29/06/22.
//

#include <iostream>
#include<queue>
using namespace std;

int solve(int *arr,int n,int k){
    
    deque<int> maxi(k);
    deque<int> mini(k);
    
    //addition of elements in deque
    for(int i =0;i<k;i++){
        
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
           
        }
        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
           
        }
        
        maxi.push_back(i);
        mini.push_back(i);
        cout<<"maxi front at "<<i<<": "<<maxi.front()<<endl;
        
        cout<<"mini front at "<<i<<": "<<mini.front()<<endl;
        
        cout<<"maxi back at "<<i<<": "<<maxi.back()<<endl;
        
        cout<<"mini back at "<<i<<": "<<mini.back()<<endl;
        
    }
    
    int ans= 0;
    ans += arr[maxi.front()] + arr[mini.front()];
    
    for(int i=k;i<n;i++){
        
        
        
        // process next window
        // removal of previous window element
        while(!maxi.empty() && i-maxi.front() >= k)
            maxi.pop_front();
        
        while(!mini.empty() && i-mini.front() >= k)
            mini.pop_front();
     
        
        // addition of new element which are coming under the updated window
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        
        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();
        
        maxi.push_back(i);
        mini.push_back(i);
        
        ans += arr[maxi.front()] + arr[mini.front()];
    }
    
    
    
    return ans;
}


int main() {
    
    
    
    int arr[7] = {2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k)<<endl;
    return 0;
}
