long long int  countPS(string s)
    {
    int mod=1e9+7;
int n=s.length();
vector<long long>prev(n,0);
for(int i=n-1;i>=0;i--){
   vector<long long>cur(n,0);
    for(int j=i;j<n;j++){
        if(i==j){
            
            cur[j]=1;
        }else{
            if(s[i]==s[j]){
             cur[j]=(1+prev[j]+cur[j-1])%mod;

                
            }else{
            
cur[j]=(mod+prev[j]+cur[j-1]-prev[j-1])%mod;
            }
            
            
        }
        
    }prev=cur;
}    
    
    return prev[n-1]%mod; 
    }
     
