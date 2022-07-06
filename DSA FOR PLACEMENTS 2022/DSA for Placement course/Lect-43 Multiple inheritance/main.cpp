//
//  main.cpp
//  lect-43 Multiple inheritance
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
    void bark(){
        cout<<"barking "<<endl;
    }
};

class Human{
public:
    string color;
    
public:
    void speak(){
        cout<<"speaking "<<endl;
    }
    
};

// MUTIPLE INHERITANCE

class Hybrid: public Human, public animal{
    
    
};

int main() {
   

    Hybrid h;
    h.speak();
    h.bark();
    
    return 0;
}
