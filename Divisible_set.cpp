#include <bits/stdc++.h> 
vector<int> divisibleSet(vector<int> &arr){
   int n=arr.size();
   sort(arr.begin(),arr.end());
    vector<int> lis(n,1);
    vector<int> hash(n);
    int maxterm=-1;
    int maxelement=0;
    for(int i=0;i<n;i++){
        hash[i]=i;
        for(int j=0;j<i;j++){

                if(arr[i]%arr[j]==0 && lis[i]<lis[j]+1) 
                {
                    lis[i]=lis[j]+1;
                    hash[i]=j;
                }
            
        }
        if(lis[i]>maxelement){
            maxelement=lis[i];
            maxterm=i;
        }
    }
    vector<int> ans;
//    ans.push_back(arr[maxterm]);
//     while(hash[maxterm]!=maxterm){
//         maxterm=hash[maxterm];
//          ans.push_back(arr[maxterm]);
//     }
//     reverse(ans.begin(),ans.end());
    
    while(maxelement){
        ans.push_back(arr[maxterm]);
        maxterm=hash[maxterm];
        maxelement--;
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
    
}
