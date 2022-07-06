//
//  main.cpp
//  C++ STL Deque
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<deque>

using namespace std;
int main() {
   
    deque<int> d;
    d.push_back(1);             // used to insert the element from back of the deque
    d.push_front(2);            // used to insert element from front of the deque
    
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
//    d.pop_back();       // used to remove element from back of the deque
//    for(int i:d){
//        cout<<i<<" ";
//    }
//    cout<<endl;
    
//    d.pop_front();          // used to remove element from front of the deque
//    for(int i:d){
//        cout<<i<<" ";
//    }
    cout<<endl;
    cout<<"1st index element --> "<<d.at(1)<<endl;
    cout<<d.empty()<<endl;
    
    cout<<"size before erasing"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);                 //use to erase elements from deque 
    cout<<"size after erasing"<<d.size()<<endl;
    
    return 0;
}
