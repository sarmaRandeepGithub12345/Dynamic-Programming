//optimised solution with 2*O(n) space and time = O(n*m)
bool isInterleave(string a, string b, string c) {
        int A=a.length(),B=b.length(),C=c.length(); 
        if(A+B!=C)return 0;
 vector<int>dp(B+1,0);
 for(int i=0;i<=A;i++){
     vector<int>temp(B+1,0);
     for(int j=0;j<=B;j++){
        if(j==0 && i==0)temp[j]=1;
         else if(i==0){
            if(b[j-1]==c[i+j-1])temp[j]=temp[j-1];
        }else if(j==0){
            if(a[i-1]==c[i+j-1])temp[j]=dp[j];
        }else{
            int val1=0,val2=0;
            if(b[j-1]==c[i+j-1]){
             val1=temp[j-1];    
           }if(a[i-1]==c[i+j-1]){
             val2=dp[j];    
           }
            temp[j]=val1|val2;
        }
     }dp=temp;
 }
    return dp[B]; 
    }



//Optimised solution tabulation
bool isInterleave(string a, string b, string c) {
        int A=a.length(),B=b.length(),C=c.length(); 
        if(A+B!=C)return 0;
 vector<vector<int>>dp(A+1,vector<int>(B+1,0));
 for(int i=0;i<=A;i++){
     for(int j=0;j<=B;j++){
        if(j==0 && i==0)dp[i][j]=1;
         else if(i==0){
            if(b[j-1]==c[i+j-1])dp[i][j]=dp[i][j-1];
        }else if(j==0){
            if(a[i-1]==c[i+j-1])dp[i][j]=dp[i-1][j];
        }else{
            int val1=0,val2=0;
            if(b[j-1]==c[i+j-1]){
             val1=dp[i][j-1];    
           }if(a[i-1]==c[i+j-1]){
             val2=dp[i-1][j];    
           }
            dp[i][j]=val1|val2;
        }
     }
 } return dp[A][B]; 
    }
// Recursion and memoization
 bool funct(string a ,string b,string c,int i,int j,int k,vector<vector<int>>&dp){
int A=a.length(),B=b.length(),C=c.length();    
    if(i==A && j==B-1 && k==C-1)return b[j]==c[k];
    if(j==B && i==A-1 && k==C-1)return a[i]==c[k];
    if(dp[i][j]!=-1)return dp[i][j];
    int val1=0,val2=0;
    if(i<A && a[i]==c[k])val1=funct(a,b,c,i+1,j,k+1,dp);
    
    if(j<B && b[j]==c[k])val2=funct(a,b,c,i,j+1,k+1,dp);
        
    return dp[i][j]=val1|val2;
}
    bool isInterleave(string a, string b, string c) {
        int A=a.length(),B=b.length(),C=c.length(); 
    if(A+B!=C)return 0;
        if(A==0 && B==0 && C==0)return 1;
    vector<vector<int>>dp(A+1,vector<int>(B+1,-1));
    return funct(a,b,c,0,0,0,dp);
    }
