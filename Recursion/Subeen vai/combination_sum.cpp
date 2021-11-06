class Solution {
public:
    void combination_sum(vector<vector<int>>&result,vector<int>&v,vector<int>&nums,int target,int idx)
    {
        if(target==0){
            result.push_back(v);
            return ;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(nums[i]<=target){
                v.push_back(nums[i]);
                combination_sum(result,v,nums,target-nums[i],i);
                v.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        vector<int>v;
        sort(nums.begin(),nums.end());
        combination_sum(result,v,nums,target,0);
        return result;
    }
};
