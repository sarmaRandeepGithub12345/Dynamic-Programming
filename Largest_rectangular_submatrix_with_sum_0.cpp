 vector<vector<int>> sumZeroMatrix(vector<vector<int>> M){
      //Code Here
       int R=M.size(),C=M[0].size();
       int ma = -1e9 - 7;
int starti=-1,startj=-1,endi=-10,endj=-10;
  for (int i = 0; i < C; i++)
    {
      //declaring an array of size R
      vector < int >sum (R, 0);
      //starting from column i
      for (int j = i; j < C; j++)
	{

	  for (int k = 0; k < R; k++)
	    {
	      sum[k] += M[k][j];
	      //cout<<sum[k]<<" ";
	 
	   }//cout<<endl;
	int tempstarti=-1,tempstartj=-1;
	int tempendi=-1,tempendj=-1;
	
	 map<int,int>mp;
	 int tempmax=-(1e9+7);
	 int total=0; 
	  for(int k=0;k<R;k++){
	      total+=sum[k];
	      
	      if(total==0){
	           tempstarti=0;
	            tempendi=k;
	            
	            tempstartj=i;
	            tempendj=j;
	          tempmax=k+1;
	      }
	      
	      if(!mp[total]){
	            
	           
	            
	            mp[total]=k+1;
	          
	      }else if(tempmax<k-mp[total]+1){
	            tempstarti=mp[total];
	            tempendi=k;
	            
	            tempstartj=i;
	            tempendj=j;
	           tempmax=max(tempmax,k-(mp[total]-1));
	      }
	      
	  }
	  //cout<<tempmax<<endl;
//	 cout<<tempstarti<<" "<<tempstartj<<endl;
//	 cout<<tempendi<<" "<<tempendj<<endl;
//	 cout<<endl;
int prevpro=(endi==-10 && endj==-10 && starti==-1 && startj==-1)?-1:(endi-starti+1)*(endj-startj+1);
int catchpro=(tempendi-tempstarti+1)*(tempendj-tempstartj+1);
 if(catchpro>prevpro){
    starti=tempstarti;
    startj=tempstartj;
    endi=tempendi;
    endj=tempendj;
}
	  
	  

        }
    }
  
//cout<<starti<<" "<<startj<<endl;
// cout<<endi<<" "<<endj;
if(starti==-1 && startj==-1 && endi==-1 && endj==-1)return {{-1}};

vector<vector<int>>ans;
 for(int i=starti;i<=endi;i++){
   vector<int>temp;
     for(int j=startj;j<=endj;j++){
         temp.push_back(M[i][j]);
     }ans.push_back(temp);
 }return ans;
  }
