vector<int>temp(3,0);
    vector<int>ans(3,0);
    for(int i=0;i<3;i++){
        temp[i]=points[n-1][i];
    }
    
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<3;j++){
            int ma=0;
            for(int k=0;k<3;k++){
                if(k==j)continue;
                ma=max(ma,temp[k]);
            }ans[j]=ma+points[i][j];
        }
       temp=ans; 
    }
    int ma=0;
    for(int i=0;i<3;i++){
        ma=max(ma,temp[i]);
    }
    return ma;
