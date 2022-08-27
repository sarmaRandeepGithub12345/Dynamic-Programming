int maximumNonAdjacentSum(vector<int> &nums){
    int p=nums[0];
    int np=0;
    for(int i=1;i<nums.size();i++){
        int temp=max(p,np);
        p=np+nums[i];
        np=temp;
    }return max(p,np);
}
