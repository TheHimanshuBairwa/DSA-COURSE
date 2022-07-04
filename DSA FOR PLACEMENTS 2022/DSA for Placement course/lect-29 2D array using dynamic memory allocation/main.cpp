//
//  main.cpp
//  lect-29 2D array using dynamic memory allocation
//
//  Created by Himanshu Bairwa on 18/06/22.
//

#include <iostream>
using namespace std;


int main() {
   
    
 /*
    int n;
    cout<<"enter n for array size: ";
    cin>>n;
    
    
    //creation done
    int ** arr = new int* [n];
    
    for(int i = 0;i<n;i++){
        
        arr[i] = new int[n];
        
    }
   
    
    
    
    //taking input
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    //printing output
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    */
    
    
   
    
    // n rows and m cols
    
    
     int row;
     cout<<"enter row for array size: ";
     cin>>row;
    
    int col;
    cout<<"enter col for array size: ";
    cin>>col;
    
     
     
     //creation done
     int ** arr = new int* [row];
     
     for(int i = 0;i<row;i++){
         
         arr[i] = new int[col];
         
     }
    
     
     
     
     //taking input
     for(int i = 0;i<row;i++){
         for(int j=0;j<col;j++){
             cin>>arr[i][j];
         }
     }
     
     //printing output
     for(int i =0;i<row;i++){
         for(int j=0;j<col;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     
     
    // releasing memory or cleaning
    
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    delete []arr;
    
    
    return 0;
}
