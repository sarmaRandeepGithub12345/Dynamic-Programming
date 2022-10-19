import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Queue;
import java.util.Scanner;

public class Main{
    
    public static class Pair {
        int l;
        int i;
        int v;
        String psf;
        
        Pair(int l, int i, int v, String psf){
            this.l = l;
            this.i = i;
            this.v = v;
            this.psf = psf;
        }
    }
        
    public static void solution(int []arr){
// write your code here
int[] dp=new int[arr.length];
int omax=0;
for(int i=0;i<dp.length;i++){
    int max=0;
    for(int j=0;j<i;j++){
        if(arr[j]<=arr[i]){
            if(dp[j]>max){
                max=dp[j];
            }
        }
    }
    dp[i]=max+1;
    if(dp[i]>omax){
        omax=dp[i];
    }
}

System.out.println(omax);
ArrayDeque<Pair>queue=new ArrayDeque<>();

for(int i=0;i<dp.length;i++){
    if(omax==dp[i])
    queue.add(new Pair(omax,i,arr[i],arr[i]+""));
}

while(queue.size()>0){
    Pair rem=queue.removeFirst();
    if(rem.l==1){
        System.out.println(rem.psf);
    }
    for(int j=rem.i-1;j>=0;j--){
        if(dp[j]==rem.l-1 && arr[j]<=rem.v){
 queue.add(new Pair(dp[j],j,arr[j],arr[j]+" -> "+rem.psf));
        }
    }
    
}



    }
    
    
    
    public static void main(String []args){
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int arr[] = new int[n];
        for(int i = 0 ; i < n ; i++){
            arr[i] = scn.nextInt();
        }

        solution(arr);

        scn.close();
    }
}
//----------------------------------------------Second method
void longestIncreasingSubsequence(vector<int>arr, int n)
{
    vector<int>dp(n,1);
    vector<int>hash(n,0);
    for(int i=0;i<n;i++)hash[i]=i;
    int ma=0;
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[j]<arr[i] && dp[i]<dp[j]+1){
            dp[i]=dp[j]+1;
            hash[i]=j;
        }
    }if(dp[i]>dp[ma])ma=i;
 //   cout<<dp[i]<<" "<<hash[i]<<endl;
}   

vector<int>ans;
while(ma!=hash[ma]){
ans.push_back(arr[ma]);
ma=hash[ma];
    
}ans.push_back(arr[ma]);
 reverse(ans.begin(),ans.end());
 for(auto it:ans)cout<<it<<" ";
    
}




