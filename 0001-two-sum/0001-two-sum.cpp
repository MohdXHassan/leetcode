class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1,sum=0;
        unordered_map<int,int> mp;     // Map -> element : its index
        
        while(i<nums.size()) {
            
            if(mp.find(target-nums[i])!=mp.end())
                return {mp[target-nums[i]],i};
            mp[nums[i]] = i;
            i++;
        }
        return {};
    }
};