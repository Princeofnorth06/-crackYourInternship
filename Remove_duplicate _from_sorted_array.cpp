 void sortColors(vector<int>& nums) {
        int z=0;
        int o=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
            if(nums[i]==1) o++;
            
        }
        for(int i=0;i<z;i++){
            nums[i]=0;
        }
        for(int i=z;i<z+o;i++){
            nums[i]=1;
        }
        for(int i= z+o;i<nums.size();i++){
            nums[i]=2;
        }
    }