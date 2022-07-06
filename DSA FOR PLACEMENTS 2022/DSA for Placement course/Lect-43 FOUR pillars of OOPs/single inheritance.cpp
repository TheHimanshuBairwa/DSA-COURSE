//
//  main.cpp
//  lct-43 FOUR pillars of OOPs
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
    
    
};

int main() {
    
    dog D;
    D.speak();
    cout<<D.age<<endl;
    
    return 0;
}
