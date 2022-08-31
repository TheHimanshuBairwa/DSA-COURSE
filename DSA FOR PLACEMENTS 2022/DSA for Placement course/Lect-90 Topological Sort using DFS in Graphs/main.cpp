//
//  main.cpp
//  Lect-90 Topological Sort using DFS in Graphs
//
//  Created by Himanshu Bairwa on 11/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: TOPOLOGICAL SORT USING DFS  (V.V.V.V.V.V.V.V.V.IMP QUESTION FOR ONLINE TEST AS WELL AS INTERVIEW)
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/topological-sort_982938
 
 CODE--> TOPOLOGICAL SORT USING DFS
 
 
 #include<unordered_map>
 #include<list>
 #include<stack>

 void topoSort(int node,vector<bool> &visited,stack<int> &s,
              unordered_map<int,list<int> > &adj){
     
     visited[node] = true;
     
     for(auto neighbour: adj[node]){
         if(!visited[neighbour]){
             topoSort(neighbour,visited,s,adj);
         }
        
     }
      // important step that is to push into stack for getting topological order
         s.push(node);
 }




 vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     
     // Create adj list
     unordered_map<int,list<int> > adj;
     for(int i = 0;i<e; i++){
         int u = edges[i][0];
         int v = edges[i][1];
         
         adj[u].push_back(v);
     }
     
     // call dfs topological sort fucntion Util for all components
    vector<bool> visited(v);
     stack<int> s;
     for(int i=0; i<v;i++){
         if(!visited[i]) {
             topoSort(i,visited,s,adj);
         }
     }
     vector<int> ans;
     
     while(!s.empty()){
         ans.push_back(s.top());
         s.pop();
     }
     return ans;
     
 }
 
 ----------------------------------------------------------------------------------------------------------------------------------------------------
 
 Question : topoSORT usinf DFS 
 
 GFG LINK: https://practice.geeksforgeeks.org/problems/topological-sort/1
 
 code:  
 

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 

    void solve(stack<int> &s, vector<int> adj[],vector<int>& visited,int node){
        
        visited[node] = true;
        
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                solve(s,adj,visited,neighbour);
            }
        }
        
        s.push(node);
    }



	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans;
	    vector<int> visited(V);
	    stack<int> s;
	    for(int i = 0; i<V; i++){
	        if(!visited[i]){
	            solve(s,adj,visited,i);
	        }
	    }
	    
	    while(!s.empty()){
	        int node = s.top();
	        ans.push_back(node);
	        s.pop();
	    }
	    return ans;
	    
	    
	}
};



 */
