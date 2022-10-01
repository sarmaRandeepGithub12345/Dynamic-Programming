#include <bits/stdc++.h> 
int countSquares(int n, int m, vector<vector<int>> &arr) {
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
           if(arr[i][j])
            arr[i][j]=min(arr[i][j-1],min(arr[i-1][j-1],arr[i-1][j]))+1;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            count+=arr[i][j];
        }
    }return count;
}
