//
//  main.cpp
//  lect-43 runtime polymorphism
//
//  Created by Himanshu Bairwa on 22/06/22.
//

#include <iostream>
using namespace std;

class animal{
  
public:
    void speak(){
        cout<<"speaking"<<endl;
    }
    
};

class dog: public animal{
    
  
public:
    void speak(){
        
        cout<<"barking"<<endl;
    }
};



int main() {
    
    dog obj;
    obj.speak();            // jab tuk dog ke andar khudka kuch speak() me hoga to hamesha vohi print hoga ya vohi call hoga
                            // lekin agar dog ka khudka speak() nai hai to vo oarent class ka function call karke output dega
    
    
    
    
    
    return 0;
}
