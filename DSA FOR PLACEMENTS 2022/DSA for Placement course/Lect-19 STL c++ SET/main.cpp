//
//  main.cpp
//  C++ STL SET
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<set>

using namespace std;
int main() {
    
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);


    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
//    s.erase(s.begin());
//    for(auto i:s){
//        cout<<i<<" ";
    
    set<int>:: iterator it = s.begin();    // used to change iterator values
    it++;
 
    
    s.erase(it);
    
    for(auto i:s){
           cout<<i<<" ";
    }
    
    
    
    cout<<endl;
    cout<<"is 5 present or not--> "<<s.count(5)<<endl;     // s.count(element value)  is used to check whether element present or not
    
    
    set<int>:: iterator itr  =s.find(5);
    cout<<"value at itr "<<*it<<endl;
    
    
    
    
    
    
    
    return 0;
    }
