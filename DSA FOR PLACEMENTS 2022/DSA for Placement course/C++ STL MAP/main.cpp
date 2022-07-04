//
//  main.cpp
//  C++ STL MAP
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<map>

using namespace std;
int main() {
    
    map<int,string> m;
    
    m[1] = "himanshu";
    m[2] = "bairwa";
    m[13] = "nanagram";
    m.insert({5,"bheem"});
     
    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        
    }
    
    cout<<"checking -13 is present or not --> "<<m.count(-13)<<endl  ;
    
    m.erase(1);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        
    }
    cout<<"\n\n\n";
    
    auto it =m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*it).first<<endl;
        
    }
   
    
    
    
    
    
    return 0;
}
