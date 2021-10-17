class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*  vector<int>vec;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vec.push_back(i);
                    vec.push_back(j);
                    break;
                }
            }
        }
        return vec;*/
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int complement=target-num;
            auto it=mp.find(complement);
            if(it!=mp.end()){
                return {it->second,i};
            }
            else{
                mp[num]=i;
            }
        }
        return {};
    }
};
