//
//  main.cpp
//  lect-42 multilevel inheritance
//
//  Created by Himanshu Bairwa on 22/06/22.
//



#include <iostream>
using namespace std;

class animal{
  
public:
    int age;
    int weight;
    
public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};

class dog: public animal{
    // first level class
    
};

class corgi: public dog{
  
    //second level class
    
};

int main() {
    
    corgi c;
    c.speak();
    
    return 0;
}
