long long int houseRobber(vector<int>& arr)
{long long n=arr.size(),p1=arr[0],p2=arr[1],np=0;   
 for(int i=1;i<n-1;i++){
        long long tmp=np;
     np=max(p1,np);
     p1=tmp+arr[i];
    }
   p1=max(p1,np);
 np=0;
 for(int i=2;i<n;i++){
     long long tmp=np;
     np=max(p2,np);
     p2=tmp+arr[i];   
 }
 p2=max(p2,np);
 return max(p1,p2);
}
