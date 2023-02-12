void topoSort(int node,vector<pair<int,int>>adj[],vector<int>&visited,stack<int>&sq){
      visited[node]=1;
      for(auto it:adj[node]){
          int child=it.first;
          if(!visited[child])topoSort(child,adj,visited,sq);
      }
      
      sq.push(node);
  }
vector<int> findMaxDistances(int N, int src, vector<vector<int>> &edges) {
	
    vector<pair<int,int>>adj[N];
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
        }
        stack<int>sq;
        vector<int>visited(N,0);
      
                topoSort(src,adj,visited,sq);
            
        vector<int>dist(N,INT_MIN);
        dist[src]=0;
        while(!sq.empty()){
            int tp=sq.top();
            sq.pop();
            for(auto it:adj[tp]){
                if(dist[it.first]<dist[tp]+it.second)
                dist[it.first]=dist[tp]+it.second;
            }
        }
for(int i=0;i<N;i++){
    if(dist[i]==INT_MIN)dist[i]=-1;
}

        return dist;
}
