long long getCount(int N)
	{
		// Your code goes here
		if(N==1)return 10;
	long long even[10],odd[10];
	for(int i=0;i<10;i++)odd[i]=1;
	int od=1;
	for(int i=2;i<=N;i++){
	    od=1-od;
	    if(od==1){
	odd[0]=even[0]+even[1]+even[3];
	odd[1]=even[0]+even[1]+even[2]+even[4];
	odd[2]=even[2]+even[1]+even[5];
	odd[3]=even[3]+even[0]+even[4]+even[6];
	odd[4]=even[4]+even[3]+even[5]+even[1]+even[7];
	odd[5]=even[5]+even[2]+even[8]+even[4];
	odd[6]=even[6]+even[7]+even[3];
	odd[7]=even[7]+even[6]+even[8]+even[4]+even[9];        
	odd[8]=even[8]+even[7]+even[5];    
	odd[9]=even[9]+even[7];            
	    
	    
	    
	        
	    }else{
	
	even[0]=odd[0]+odd[1]+odd[3];
	even[1]=odd[0]+odd[1]+odd[2]+odd[4];
	even[2]=odd[2]+odd[1]+odd[5];
	even[3]=odd[3]+odd[0]+odd[4]+odd[6];
	even[4]=odd[4]+odd[3]+odd[5]+odd[1]+odd[7];
	even[5]=odd[5]+odd[2]+odd[8]+odd[4];
	even[6]=odd[6]+odd[7]+odd[3];
	even[7]=odd[7]+odd[6]+odd[8]+odd[4]+odd[9];        
	even[8]=odd[8]+odd[7]+odd[5];    
	even[9]=odd[9]+odd[7];        
//	even[10]=odd[2]+odd[1]+odd[5];        
	        
	    }
	    
	    
	}long long sum=0,mod=1e9+7;
		for(int i=0;i<10;i++){
		    if(od==1)sum=(sum+odd[i]);
		    else sum=(sum+even[i]);
		}
		return sum;
	}
