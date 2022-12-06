//
//  main.cpp
//  Lect-36 Shortest Distance in Bianry Maze Graph
//
//  Created by Himanshu Bairwa on 18/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: SHORTEST DISTAMCE IN BINARY MAZE
 
 LINK:   https://practice.geeksforgeeks.org/problems/shortest-path-in-a-binary-maze-1655453161/1
 
 CODE:
 
 
 class Solution {
   public:
     int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                      pair<int, int> destination) {
         
         queue<pair<int,pair<int,int>>>q;
         int n = grid.size();
         int m = grid[0].size();
         
         vector<vector<int> >dist(n,vector<int>(m,1e9));
         
         dist[source.first][source.second] = 0;
         q.push({0,{source.first,source.second}});
         int delr[] = {-1,0,1,0};
         int delc[] ={0,1,0,-1};
         
         while(!q.empty()){
             pair<int,pair<int,int>> front = q.front();
             q.pop();
             int dis = front.first;
             int row = front.second.first;
             int col = front.second.second;
             
               // if we are standing on destination means where source  == destination
            if(row == destination.first && col == destination.second){
                 return 0;
             }
             
             for(int i = 0; i<4; i++){
                 int nrow = row + delr[i];
                 int ncol = col + delc[i];
                 
                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1
                 && dis + 1 < dist[nrow][ncol]){
                     dist[nrow][ncol] = dis + 1;
                     if(nrow == destination.first && ncol == destination.second){
                         return dis + 1;
                     }
                     q.push({1+dis,{nrow,ncol}});
                     
                     
                 }
             }
         }
         return -1;
         
         
     }
 };

 
 */
