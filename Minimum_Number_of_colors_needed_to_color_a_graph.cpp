
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int funct(vector<int>graph[],int n){
  
    
    int res[n];
    
    res[0]=0;
    for(int i=1;i<n;i++) res[i]=-1;
    int count=0;
    //1,2,3,4
    for(int i=1;i<n;i++){
        bool available[n]={0};
        
      
        //checking which adjacent nodes have which color
        //existent colors are marked present
        for(auto pn:graph[i]){
            
            //if adjcent nodes to i are visited 
            if(res[pn]>-1){
              //res[pn] is the color of the node
                available[res[pn]]=1;//color res[pn] is available
            }    
        }   
        int j=0;
        for(;j<n;j++){
            if(!available[j]){
                //first unavailable color is assigned to the node
                res[i]=j;
                break;
            }
        }
        
        
    }
    set<int>uset;
    for(int i=0;i<n;i++){
        if(res[i]>-1){
            uset.insert(res[i]);
        }
    }
   
    return uset.size();
}

int main()
{vector<vector<int>>arr={{0,1},{0,2},{0,4},{1,3},{1,4},{2,3},{2,4}};
int n=5;
vector<int>graph[5];
  for(auto it:arr){
   graph[it[0]].push_back(it[1]);
   graph[it[1]].push_back(it[0]);
  }
cout<<funct(graph,5);

    return 0;
}
