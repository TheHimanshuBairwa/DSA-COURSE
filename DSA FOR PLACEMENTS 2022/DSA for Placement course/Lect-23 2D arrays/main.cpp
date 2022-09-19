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

/*
QUESTION 1 : PRINT SPIRAL

LINK: https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268

CODE: 

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
     vector<int> ans;
    for(int col = 0; col <mCols ; col++){
        
        //check for col even or odd
        if(col&1){
            
            for(int row = nRows-1; row>=0; row--){

                ans.push_back(arr[row][col]);
            }
            
        }else {
            for(int row = 0 ; row <   nRows ; row++){

                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

*/

/*
Question 2: Spiral Print of 2D matrix
link: https://leetcode.com/problems/spiral-matrix/

code:

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        
        int count = 0;
        int totalelem = row*col;
        // index initialisation
        
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row-1;
        int endingcol = col-1;
        
        while(count<totalelem){
            
            //print starting row
            for(int index = startingcol; count<totalelem && index<=endingcol; index++) {
                ans.push_back(matrix[startingrow][index]);
                count++;
            }startingrow++;
            
            //ending col print
            for(int index = startingrow; count<totalelem && index<=endingrow; index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
                
            }endingcol--;
            
            // ending row print
            for(int index = endingcol; count<totalelem && index>= startingcol;index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }endingrow--;
            
            //starting col print
            for(int index = endingrow; count<totalelem && index >=startingrow; index--){
                ans.push_back(matrix[index][startingcol]);
                count++;
            }startingcol++;
        }
        
        return ans;
    }
};

*/

/*
QUESTION - 3 : ROTATE 2D MATRIX BY 90 DEGREES CLOCKWISE

LINK: https://leetcode.com/problems/rotate-image/

CODE: 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i< row; i++){
            for(int j = 0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i = 0; i<row; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
*/


/*

QUESTION 4: SEARCH IN 2D MATRIX (BINARY SEARCH IN MATRIX) 
                           (ONLY ROW SORTED AND The first integer of each row is greater than the last integer of the previous roW)
 

LINK: https://leetcode.com/problems/search-a-2d-matrix/

CODE: 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end = row*col-1;
        int mid = start + (end-start)/2;
        
        while(start<=end){
            int element = matrix[mid/col][mid%col];
            
            if(element == target){
                return 1;
            }
            else if(element < target){
                start = mid +1;
                
            }else{
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        
        }
        
        return 0;
        
    }
};

*/


/*
QUESTION 5: SEARCH IN SORTED MATRIX 2 (ROW AND COLOUMN BOTH ARE SORTED)

LINK: https://leetcode.com/problems/search-a-2d-matrix-ii/

CODE:  

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowindex = 0;
        int colindex = col-1;
        
        while(rowindex < row && colindex >= 0){
             int element = matrix[rowindex][colindex];
            
            if(element == target){
                return 1;
            }else if( element < target){
                rowindex++;
            }else{
                colindex--;
            }
            
            
            
        }  
        return 0;
        
    }
};

*/









