//
//  main.cpp
//  Lect-33 Dijsktra's Algo Using Set
//
//  Created by Himanshu Bairwa on 15/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTOIN: DIJSKTRA'S ALDO USING SET
 
 LINK:  https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
 
 CODE:
 
 class Solution
 {
     public:
     //Function to find the shortest distance of all the vertices
     //from the source vertex S.
     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
     {
        set<pair<int,int>> st;
        vector<int> dist(V,1e9);
        
        st.insert({0,S});
        dist[S] = 0;
        
        while(!st.empty()){
            auto it = *(st.begin());  // it will return value of the top
                                     // if * nai lagaoge to top ka address return karega
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            
            for(auto it: adj[node]){
                int adjNode = it[0];
                int adjWeight = it[1];
                
                if(dis + adjWeight < dist[adjNode]){
                    
                    // if we have smaller distance then already present in the set then erase it
                    if(dist[adjNode] != 1e9){
                        st.erase({dist[adjNode], adjNode});
                    }
                    
                    dist[adjNode] = dis + adjWeight;
                    st.insert({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
     }
 };

 
 
 
 
 */
