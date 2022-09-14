//Solution 1
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
//Solution 2
int longestIncreasingSubsequence(int arr[], int n)
{
   // Write Your Code here
    vector<int>temp;
  temp.push_back(arr[0]);
  int len=1;
  for(int i=1;i<n;i++)
  {
      if(arr[i]>temp.back())
      {
          temp.push_back(arr[i]);
          len++;
      }
      else
      {
          int idx=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
          temp[idx]=arr[i];
      }
  }
    return len;
}


