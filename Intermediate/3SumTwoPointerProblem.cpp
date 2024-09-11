class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int target = -nums[i];
            int firstPointer = i+1;
            int lastPointer = nums.size()-1;
            while(firstPointer<lastPointer){
                int sum = nums[firstPointer]+nums[lastPointer];
                if(sum == target){
                    triplets.push_back({nums[i], nums[firstPointer], nums[lastPointer]});
                    while (firstPointer < lastPointer && nums[firstPointer] == nums[firstPointer + 1])
                    firstPointer++;
                    while (firstPointer < lastPointer && nums[lastPointer] == nums[lastPointer - 1]) 
                        lastPointer--;
                    firstPointer++;
                    lastPointer--;
                }
                else if(sum < target)
                    firstPointer++;
                else
                    lastPointer--;
            }
        }
        return triplets;
    }
};
