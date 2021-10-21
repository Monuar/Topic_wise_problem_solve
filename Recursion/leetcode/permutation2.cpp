
    void permute(vector<vector<int>>&result,vector<int>&nums,int i)
    {
        if(nums.size()-1==i){
            result.push_back(nums);
           // return ;
        }
        unordered_set<int>s;
        for(int j=i;j<nums.size();j++){
            if(s.find(nums[j])==s.end()){
                swap(nums[i],nums[j]);
                permute(result,nums,i+1);
                swap(nums[i],nums[j]);
                s.insert(nums[j]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int> nums) {
       vector<vector<int>>result;
        permute(result,nums,0);
        return result;
    }
