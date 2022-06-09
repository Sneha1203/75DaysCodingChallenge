void moveZeroes(vector<int>& nums) {
    int zeroIdx = 0;
    for(int i = 0; i < nums.size(); i++) {
        // if(nums[i] == 0) {
        //     zeroIdx = i;
        // }
        if(nums[i] != 0){
            swap(nums[zeroIdx], nums[i]);
            zeroIdx++;
            // zeroIdx = i;

            // nums[zeroIdx] = nums[i];
            // nums[i] = 0;
        }
    }
}

// int p, q;
        // for(int i = 0; i < nums.size() - 1; i+=2) {
        //     p = nums[i];
        //     q = nums[i + 1];
        //     if(p == 0 && q != 0) {
        //         int temp = nums[i];
        //         nums[i] = nums[i + 1];
        //         nums[i + 1] = temp;
        //     }
                
                
            // if(nums[i] != 0)
            //     p = nums[i];
            // if (nums[i] == 0) {
            //     q = nums[i];
            //     int temp = q;
            //     nums[i] = p;
            //     p = temp;
            // }
    //     }
    // }