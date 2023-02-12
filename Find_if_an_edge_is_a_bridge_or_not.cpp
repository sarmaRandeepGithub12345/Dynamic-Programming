//https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1
vector<vector<int>>ans;

void dfs(int child, int parent,vector<int>adj[],vector<int>&timing ,vector<int>&low,int&timer  ){

timing[child]=low[child]=timer;
timer++;
for(auto it:adj[child]){
    if(!timing[it]){
     dfs(it,child,adj,timing,low,timer);
     low[child]=min(low[child],low[it]);
     if(timing[child]<low[it]){
     ans.push_back({child,it});
     }
    }else if(it!=parent){
     low[child]=min(low[child],low[it]);
    }
}
    
}
    int isBridge(int n, vector<int> adj[], int c, int d) 
    {
         
vector<int>timing(n,0);
vector<int>low(n,0);
for(int i=0;i<n;i++){
    int timer=1;
if(timing[i]==0)    
dfs(i,-1,adj,timing,low,timer);    
}

for(auto it:ans){
    if(it[0]==c && it[1]==d)return 1;
    if(it[1]==c && it[0]==d)return 1;
    
}
return 0;


    }
