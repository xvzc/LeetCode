class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (nums[lo] < nums[hi]) {
                hi = mid - 1;
                continue;
            }

            if (nums[lo] > nums[mid]) {
                hi = mid; // include mid because nums[lo] could possibly be the minimum
                continue;
            }

            lo = mid + 1;
            continue;
        }

        return nums[lo];
    }
};
