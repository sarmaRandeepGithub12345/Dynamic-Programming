 int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,1);
 
 int omax=1;
 for(int i=0;i<n;i++){
     int ma=0;
     for(int j=0;j<i;j++){
         
         if(arr[j]<arr[i]){
             ma=max(ans[j],ma);
         }
     }ans[i]=ma+1;
     omax=max(omax,ans[i]);
 }
    return omax;
    }
