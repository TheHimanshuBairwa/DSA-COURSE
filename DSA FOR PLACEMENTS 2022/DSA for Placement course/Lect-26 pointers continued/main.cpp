//
//  main.cpp
//  lect-26 pointers continued
//
//  Created by Himanshu Bairwa on 16/06/22.
//

#include <iostream>
using namespace std;

void print(int *p){
    
    cout<<*p<<endl;
    cout<<p<<endl;
}

void update(int *p){
    
    cout<<"before --> inside update function "<<p<<endl;
    p = p+1;
    cout<<"after --> inside update function "<<p<<endl;
   
}



int main() {
   /*
    int arr[10] = {2,9,4,5,6};
    int arr1[10] = {23,122,41,67};
    
    
    cout<<"address of first block of array: "<<arr<<endl;
    cout<<"address of first block of array: "<<&arr[0]<<endl;
    cout<<arr[0]<<endl  ;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<"1st "<<arr1[2]<<endl;
    cout<<"2nd "<<*(arr1+2)<<endl;
    cout<<"3rd "<<2[arr1]<<endl;
    cout<<"4th "<<*(2+arr1)<<endl;
    
    
    
    int temp[10] = {1,2};
   
    
    
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;              // temp means address of first block in array and *temp means values at that address
    cout<<sizeof(&temp)<<endl;              // &temp means temp=address of first block to store that address 8 bytes memory used
    
    
    
    int *ptr = &temp[0];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(ptr)<<endl;          //address
    cout<<sizeof(*ptr)<<endl;         // value at that address
    cout<<sizeof(&ptr)<<endl;         // size of ptr block
     
    
   
    
    
    
    int a[20] = {1,2,3,5};
    
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    
    int *p = &a[0];
    
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;         // address of p vala block ka
    
 
    
    
    int arr[10];
  
    //error--> not assignable not chageble
    //arr = arr+1;
    
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr +1;           // ye address ko aage badata hai naki address ko change karta hai means first block se second block par jata hai
    cout<<ptr<<endl;
    
//
    
    
    
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];
    
    char ch[6] = "abcde";       // one xtra block for null character
    char *c = &ch[0];
    
    
    cout<<arr<<endl;
    // attention here bcoz cout implementation are different
    cout<<ch<<endl;
    
    
    cout<<ptr<<endl;        //print address of first block
    cout<<c<<endl;              //print entire string
    
    
    
    char temp = 'z';
    char *cp = &temp;
    
    cout<<cp<<endl;   // print will continue untill and unless we will get null character
    
    
    */
    
    // POINTERS  WITH FUNCTIONS
    
    int temp = 5;
    int *p = &temp;
    
    print(p);           //function print vala isdoing this
   
    cout<<"before-> inside main() "<<p<<endl;
    update(p);      // update function
    cout<<"after-> inside main() "<<p<<endl;
    cout<<*p<<endl;
   
    
    return 0;
}
