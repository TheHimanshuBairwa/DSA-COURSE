//
//  main.cpp
//  STL C++ VECTOR
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<vector>


using namespace std;
int main() {
   
    vector<int> v;
    
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> last(a);
    cout<<"last vector--> ";
    for(int i:last){
        cout<<i<<" ";
        
    }cout<<endl;
    
    cout<<"capacity--> "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity--> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity--> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity--> "<<v.capacity()<<endl;       // here size of vector gets doubled once it reaches it capacity that why vector is dynamic
    cout<<"size--> "<<v.size()<<endl;               // it will show how many elements are there in vector
    
    cout<<"\nelement at index 2--> "<<v.at(2)<<endl<<endl;
    
    cout<<"first element of vector --> "<<v.front()<<endl;
    cout<<"last element of vector --> "<<v.back()<<endl;
    
    
    cout<<"before pop: "<<endl;
    
    for(int i:v){
        cout<<i;
    }
    cout<<endl;
    
    cout<<"after pop "<<endl;
    v.pop_back();       // this command is used to remive element from back of vector
    for(int i:v){
        cout<<i;
    }
    cout<<endl;
    cout<<"before clearing the vector"<<endl;
    
    cout<<"size--> "<<v.size()<<endl;
    v.clear();
    cout<<"after clearing the vector"<<endl;
    cout<<"size--> "<<v.size()<<endl;
    
    
    
    
    
    return 0;
}
