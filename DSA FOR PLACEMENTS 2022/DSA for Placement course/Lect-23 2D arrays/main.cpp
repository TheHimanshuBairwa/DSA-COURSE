//
//  main.cpp
//  lect-23 2D arrays
//
//  Created by Himanshu Bairwa on 14/06/22.
//

#include <iostream>
using namespace std;


bool checkpresence(int arr[][3],int target, int n, int m){
   
    for(int i =0;i<n;i++) {
        for( int j = 0; j<m ; j++) {
            if(arr[i][j] == target){
                return 1;
            }
            
        }
       
    }
    return 0;
}


//to find row sum
void rowsum(int arr[][3],int n,int m){
    
    for(int i = 0 ; i<n; i++) {
        cout<<" sum of row "<<i<<" is ";
        int sum = 0;
        for(int j = 0; j<m ; j++){
            sum += arr[i][j];
        }cout<<sum<<endl;;
        
    
}
    cout<<endl;
}
 
int largestrowsum (int arr[][3],int n, int m){
    int maxi = INT_MIN;
    int rowindex = -1;
    for(int i = 0 ; i<n; i++) {
        int sum = 0;
        for(int j = 0; j<m ; j++){
            sum += arr[i][j];
        }
        
        if(sum>maxi){
            maxi = sum;
            rowindex = i;
        }
        
}
    cout<<"the sum is maxi: "<<maxi;
    return rowindex;
}

int main() {
  
//    int arr[3][4];
//    int arr2[3][3] = { 1,2,3,4,5,6,7,8,9};
//    int arr3[3][3] = {{1,11,111},{2,22,222},{3,33,333}};
    /*
    int arr[3][3];
  
    // taking row wise input
    cout<<" enter the input "<<endl;
    for(int i =0;i<3;i++) {
        for( int j = 0; j<3 ; j++) {
            cin>>arr[i][j];
            
        }
    }
     
  
//    // taking col wise input
//    for(int i =0;i<4;i++) {
//        for( int j = 0; j<3 ; j++) {
//            cin>>arr[j][i];
//
//        }
//    }
   
    
    // printing 2D array
    for(int i =0;i<3;i++) {
        for( int j = 0; j<3  ; j++) {
            cout<<arr[i][j]<<" ";
            
        }cout<<endl;
    }
   
    
    int target;
    cout<<"enter the element which is to be searched:  ";
    cin>>target;
    
    
    if(checkpresence(arr , target , 3 , 3))
    {
        cout<<"element is present ";
    }
    else
    
    {
        cout<<"element is not present ";
    }
    cout<<endl;
 
    
    
    
    // FINDING THE ROW WISE SUM
    // printing 2D array
    for(int i =0;i<3;i++) {
        for( int j = 0; j<3  ; j++) {
            cout<<arr[i][j]<<" ";
            
        }cout<<endl;
    }
   
        
    rowsum(arr,3,3);
    int ansindex =largestrowsum(arr, 3, 3);
    cout<<"\nmaximum sum at row index: "<<ansindex<<endl;

    */
    
    cout<<3%4<<endl;
    return 0;
}
