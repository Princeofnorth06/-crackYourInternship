vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
            return {nums};
        }
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    ans.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }