// Move Zeros

void moveZeroes(vector<int>& nums) {
        if(nums.size()==1 or nums.size()==0) return;
        int l=0;
        int r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                int temp=nums[r];
                nums[r]=nums[l];
                nums[l]=temp;
                l++;
                r++;
            }else{
                 r++;
            }
               
           
        }
    }