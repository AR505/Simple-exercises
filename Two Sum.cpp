class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
                for (int i = 0; i < nums.size(); i++) {
            int input = nums[i];
            int m = target - input;

            auto it = map.find(m);
            if (it != map.end()) {
                return {it->second, i};
            }

            map[input] = i;
        }

        return {};
    }
};
