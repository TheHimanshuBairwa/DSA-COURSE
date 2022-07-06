//
//  main.cpp
//  lect-28 reference variable and dynamic memory allocation
//
//  Created by Himanshu Bairwa on 17/06/22.
//

#include <iostream>
using namespace std;

// pass by reference value

void update2(int& n){
    n++;
    
}



// pass by value method
void update(int n){
   
    n++;
}



int getsum(int *arr, int n){
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];      // both are same  arr[i] = *(arr + i)
        
    }
    return sum;
}




int main() {
    /*
    int i =5;
    //
    //creating a reference variable
    
    int& j = i;
    cout<<"i: "<<i<<endl;
    i++;
    cout<<"i :"<<i<<endl;
    j++;
    cout<<"i :"<<i<<endl;

    
    int n = 5;
    cout<<"before: "<<n<<endl;
    update2(n);
    cout<<"after: "<<n<<endl;

     */
    
  // variable size array in heap memory usin "new"
    // in heap memory it will give us aadress so we use pointers to access that variable in heap memory
    
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    
    
    // variable size array banane ka tareeka
    
    int* arr  = new int[n];
    
    cout<<"enter array input :"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"sum of array is: "<<getsum(arr,n)<<endl;
    
    delete []arr;

    return 0;
}
