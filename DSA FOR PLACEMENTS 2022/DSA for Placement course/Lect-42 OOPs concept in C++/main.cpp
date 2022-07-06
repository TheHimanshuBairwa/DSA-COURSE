//
//  main.cpp
//  lect-42 OOPs concept in C++
//
//  Created by Himanshu Bairwa on 22/06/22.
//

#include <iostream>
//#include "Hero.cpp"
using namespace std;

class Hero{

    // Properties of class or attributes
    
private:
    int health;                 // by default porperties of class private hoti hai
    
public:
    char *name;
    char level;
    static int timetocomplete;      // static keyword
    
    // Default constructor
    
    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }
    
    // Parametrized constructor
    
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;            // this keyword stores address of ramesh and i/p health is stored in ramesh's health
    }                                       // this is a pointer to current object
    
    
    
    Hero(int health, char level){
        
        this -> level = level;
        this -> health = health;
    }
    
    
     // Copy constructor
    
    Hero(Hero& temp){
        
        // DEEP COPY
        char *ch = new char[strlen(temp.name)+1];           // yaha par entire different array abanya hai name ke liye so
        strcpy(ch,temp.name);                               // change in name of hero1 will not reflect in name of hero2
        this->name = ch;
        
        cout<<"copy constructor called"<<endl;
        this-> health = temp.health;
        this-> level = temp.level;
    }
    
    
    
    
    // GETTER and SETTER
    
    // getter
    int gethealth(){
        return health;
    }
    
    // getter
    char getlevel(){
        return level;
    }
    
    // setter
    void sethealth(int h){
        health = h;
    }
    
    //setter
    void setlevel(char ch){
        level = ch;
    }
    
    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
        cout<<"name: "<<this->name<<endl;
    }
    
    void setname(char name[]){
        strcpy(this-> name,name);
    }
    
    
    // Destructor
    ~Hero(){
        cout<<"Destructor bhai called: "<<endl;
    }
    
    
    // static fucntions
    
    static int random(){
        return timetocomplete;
    }
};


int Hero::timetocomplete = 5;

int main() {
    
    cout<<Hero::timetocomplete<<endl;       // bina object create kare print karva diya
    cout<<Hero::random()<<endl;
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    
    // Static allocation
    Hero hima;
    
    // Dynamic allocation
    Hero *anshu = new Hero();
    delete anshu;
    
    
    
    
    
    
    

    // Shallow copy concept
    
    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('B');
    char name[10]  = "himanshu";
    hero1.setname(name);
    
//    hero1.print();
    
    
    // use default copy constructor but for this u need to comment your copy constructor
    Hero hero2(hero1);
//    Hero hero2 = hero1;               same as above
    
    cout<<endl;
//    cout<<"hero2: "<<endl;
//    hero2.print();
    
    
    //change hero1 name and then print and check hero2 me changes reflect hua ya nai
    
    hero1.name[0] = 'P';
    
//    cout<<endl<<endl;
//    hero1.print();
    
    
    
//    cout<<endl<<endl;
//    hero2.print();
    
    
    // Copy Assignment operator
    
    hero1  = hero2;        // hero2 ki sari values hero1 me daal di
    
    cout<<endl<<endl;
    cout<<"after copy assignment operator"<<endl;
    
    hero2.print();
    
    cout<<endl<<endl<<"hero1 "<<endl;
    hero1.print();
    
  
    
    Hero himanshu(100,'A');
    himanshu.print();
    
    
    // Copy constructor called
    Hero bairwa(himanshu);          //copying all the properties values of himanshu into Bairwa
    bairwa.print();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    Hero temp(100,'A');
    cout<<temp.gethealth()<<endl;
    cout<<temp.level<<endl;
    
    
    
    Hero ramesh(10);                                // i/p me health tha isliye 10 diya for parameterized constructor
    
    cout<<"address of ramesh: "<<&ramesh<<endl;
    
    
    
    
 
    
    //Creation of object
       
    // static allocation
    Hero a;
    
    a.level = 'A';
    a.sethealth(90);
    
    cout<<"health of a is: "<<a.gethealth()<<endl;
    cout<<"level of a is: "<<a.level<<endl;
    
    // dynamic allocation
    
    Hero  *b = new Hero;
    
    
    b->level = 'B';
    b->sethealth(100);          // use (*b) or b-> this notation for accessing
     
    
    // method 1 of allocation
    cout<<"health of b is: "<<(*b).gethealth()<<endl;
    cout<<"level of b is: "<<(*b).level<<endl;
    
    
    //method 2 of allocation
    cout<<"health of b is: "<<b->gethealth()<<endl;
    cout<<"level of b is: "<<b->level<<endl;
    
    
    
    
    
    
    
    a.level = 'A';         // to acces these properties use dot operator
     
   
    a.sethealth(70);         // by using setter we are assigning some values to health
    
    cout<<"health is: "<<a.gethealth()<<endl;    // by using getter we are accesing health property which is private
    
    cout<<"level is: "<<a.level<<endl;
    
//    cout<<"size of h1 is: "<<sizeof(h1)<<endl;    // read about padding and greedy allignment
    
    */
    
    return 0;
}
