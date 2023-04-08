class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (hmap.find(target - nums[i]) == hmap.end()) {
                hmap[nums[i]] = i;
                continue;
            }

            return { hmap[target - nums[i]], i };
        }

        return {};
    }
};