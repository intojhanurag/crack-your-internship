class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                result=nums[i];
                break;
            }
        }

        return result;
    }
};