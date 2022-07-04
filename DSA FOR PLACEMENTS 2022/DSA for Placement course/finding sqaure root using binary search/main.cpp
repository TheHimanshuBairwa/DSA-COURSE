//
//  main.cpp
//  finding sqaure root using binary search
//
//  Created by Himanshu Bairwa on 08/06/22.
//

#include <iostream>
using namespace std;

long long int sqrt_binarysearch(int n){
       
       int s= 0;
       int e=n;
       long long int mid = s+ (e-s)/2;
       long long int ans = -1;
       
      while(s<=e){
          long long int square = mid*mid;
       if(square > n){
           e = mid-1;
       }
          else if(square < n){
           ans = mid;
           s = mid + 1;
              
           
       }else if(square == n){
           return mid;
       }
      
       mid = s+ (e-s)/2;
   
           
   }return ans;
}

double morePrecision(int n, int precision, int tempsol){
    
    double factor  = 1;
    int ans = tempsol;
    
    for(int i = 0; i< precision ; i++){
        
        factor = factor/10;
        
        for(double j = ans; (j*j) < n ; j = j + factor ){
            ans = j;
        }
    }
    return ans;
}



int main() {
    
    int n;
    cout<<" enter the number :"<<endl;
    
    cin>>n;
    
    int tempsol = sqrt_binarysearch(n);
    
    cout<< tempsol<<endl;
    
    double updated_ans = morePrecision(n,3,tempsol);
    cout<<" answer is: "<< morePrecision(n ,3 , tempsol)<<endl;
    
    



    return 0;
}
